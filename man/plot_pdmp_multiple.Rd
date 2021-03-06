% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/plot_pdmps.R
\name{plot_pdmp_multiple}
\alias{plot_pdmp_multiple}
\title{Plot multiple PDMP dynamics and MCMC samples for posterior distributions}
\usage{
plot_pdmp_multiple(
  list_pdmp,
  coords = 1:2,
  inds = 1:10^3,
  nsamples = 10^3,
  burn = 0.1,
  mcmc_samples = NULL,
  pch = 20,
  cols = NULL
)
}
\arguments{
\item{list_pdmp}{List of PDMP sampler trajectories to plot}

\item{coords}{Vector of coordinates to plot the marginal and joint distributions}

\item{inds}{Vector of indices of the PDMP trajectories to plot.}

\item{nsamples}{Number of samples to generate and use for marginal density estimates of the PDMP methods}

\item{burn}{Percentage of events to use as burn-in. Should be between 0 and 1, default 0.1.}

\item{mcmc_samples}{Optional Matrix of samples from an MCMC method. Each row should be a sample.}

\item{pch}{The graphics parameter for off diagonal plots. Default is 20.}

\item{cols}{Colours to be used for plotting the PDMPs and MCMC samples (in order).}
}
\value{
Generates a plot of the marginal density on the diagonal and pairs plots of the trajectories
}
\description{
Plots to compare PDMP samplers and optionally MCMC samples.
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

zigzag_fit <- zigzag_logit(maxTime = 1, dataX = data$dataX,datay =data$dataY,
                           prior_sigma2 = 10,theta0 = rep(0, p),
                           x0 = rep(0, p), rj_val = 0.6,
                           ppi = ppi)
\dontrun{
bps_fit <- bps_n_logit(maxTime = 1, dataX = data$dataX, datay = data$dataY,
                       prior_sigma2 = 10, theta0 = rep(0, p), x0 = rep(0, p),
                       ref = 0.1, rj_val = 0.6,ppi = ppi)

plot_pdmp_multiple(list(zz=zigzag_fit,bps=bps_fit), coords = 1:2, inds = 1:10^3,
                      nsamples = 1e4, burn = .1)
}

}
