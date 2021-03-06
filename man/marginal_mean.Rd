% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/ppi_calcs.R
\name{marginal_mean}
\alias{marginal_mean}
\title{Calculate the marginal mean}
\usage{
marginal_mean(times, positions, thetas, marginals = NULL, burnin = 1)
}
\arguments{
\item{times}{Vector of event times from the PDMP trajectory}

\item{positions}{Matrix of positions from the PDMP trajectory, each column should correspond to a position}

\item{thetas}{Matrix of PDMP velocities}

\item{marginals}{Vector of indices to calculate the marginal means.}

\item{burnin}{Number of events to use as burnin}
}
\value{
Returns the posterior mean of the parameter estimated using the PDMP trajectories.
}
\description{
Calculate the marginal mean
}
\examples{
generate.logistic.data <- function(beta, n.obs, Sig) {
p <- length(beta)
dataX <- MASS::mvrnorm(n=n.obs,mu=rep(0,p),Sigma=Sig)
vals <- dataX \%*\% as.vector(beta)
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

zigzag_fit <- zigzag_logit(maxTime = 1, dataX = data$dataX, datay = data$dataY,
                           prior_sigma2 = 10,theta0 = rep(0, p), x0 = rep(0, p), rj_val = 0.6,
                           ppi = ppi)
\dontrun{
b <- marginal_mean(zigzag_fit$times, zigzag_fit$positions, zigzag_fit$theta, marginals=1:p)
}

}
