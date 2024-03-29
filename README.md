# Reversible Jump PDMP methods R package

rjpdmp is an R package that provides an implementation of the reversible jump PDMP methods developed in the paper Reversible Jump PDMP Samplers for Variable Selection (Chevallier, Fearnhead, Sutton 2020, https://arxiv.org/abs/2010.11771). It also contains an implementation of a Gibbs sampler for variable selection in Logistic regression based on Polya-Gamma augmentation (code for simulating PG variables adapted from https://github.com/jgscott/helloPG).

Installation
------------

The preferred install is from CRAN:
```R
install.packages("rjpdmp")
```

Using [devtools](https://github.com/r-lib/devtools) install with:

```R
# library(devtools)
# install_github("matt-sutton/rjpdmp")
```

Example Usage (Logistic regression)
--------------------------

```R
generate.logistic.data <- function(beta, n.obs, Sig) {
p <- length(beta)
dataX <- MASS::mvrnorm(n=n.obs,mu=rep(0,p),Sigma=Sig)
vals <- dataX %*% as.vector(beta)
generateY <- function(p) { rbinom(1, 1, p)}
dataY <- sapply(1/(1 + exp(-vals)), generateY)
return(list(dataX = dataX, dataY = dataY))
}

n <- 15
p <- 25
beta <- c(1, rep(0, p-1))
Siginv <- diag(1,p,p)
Siginv[1,2] <- Siginv[2,1] <- 0.9
set.seed(1)
data <- generate.logistic.data(beta, n, solve(Siginv))
ppi <- 2/p

zigzag_fit <- zigzag_logit(maxTime = 5, dataX = data$dataX, datay = data$dataY,
                           prior_sigma2 = 10,theta0 = rep(0, p), x0 = rep(0, p), 
                           rj_val = 0.6, ppi = ppi)

gibbs_fit <- gibbs_logit(maxTime = 5, dataX = data$dataX, datay = data$dataY,
                         prior_sigma2 = 10,beta = rep(0,p), gamma = rep(0,p),
                         ppi = ppi)

# Plotting
plot_pdmp(zigzag_fit, coords = 1:2, inds = 1:10^4,burn = .1, nsamples = 5*1e4, 
          mcmc_samples = t(gibbs_fit$beta*gibbs_fit$gamma))

# Check how frequently models were visited
models_seen <- models_visited(zigzag_fit$theta)

# Look at the top ten visited models
models_seen[1:10,]

# Calculate model probabilities:
analysis <- model_probabilities(zigzag_fit$times, zigzag_fit$theta,
                    models = models_seen[1:10,1:p], marginals=1:p)

# Probability of specific models 
analysis$prob_mod

# Marginal probability of inclusion
analysis$marginal_prob

```

