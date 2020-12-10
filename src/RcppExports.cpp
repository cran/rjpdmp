// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// bps_n_logit
List bps_n_logit(double maxTime, const arma::mat& dataX, const arma::vec& datay, double prior_sigma2, arma::vec x0, arma::vec theta0, double ref, double rj_val, double ppi, int nmax, int burn);
RcppExport SEXP _rjpdmp_bps_n_logit(SEXP maxTimeSEXP, SEXP dataXSEXP, SEXP dataySEXP, SEXP prior_sigma2SEXP, SEXP x0SEXP, SEXP theta0SEXP, SEXP refSEXP, SEXP rj_valSEXP, SEXP ppiSEXP, SEXP nmaxSEXP, SEXP burnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type maxTime(maxTimeSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type dataX(dataXSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type datay(dataySEXP);
    Rcpp::traits::input_parameter< double >::type prior_sigma2(prior_sigma2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< double >::type ref(refSEXP);
    Rcpp::traits::input_parameter< double >::type rj_val(rj_valSEXP);
    Rcpp::traits::input_parameter< double >::type ppi(ppiSEXP);
    Rcpp::traits::input_parameter< int >::type nmax(nmaxSEXP);
    Rcpp::traits::input_parameter< int >::type burn(burnSEXP);
    rcpp_result_gen = Rcpp::wrap(bps_n_logit(maxTime, dataX, datay, prior_sigma2, x0, theta0, ref, rj_val, ppi, nmax, burn));
    return rcpp_result_gen;
END_RCPP
}
// bps_s_logit
List bps_s_logit(double maxTime, const arma::mat& dataX, const arma::vec& datay, double prior_sigma2, arma::vec x0, arma::vec theta0, double ref, double rj_val, double ppi, int nmax, int burn);
RcppExport SEXP _rjpdmp_bps_s_logit(SEXP maxTimeSEXP, SEXP dataXSEXP, SEXP dataySEXP, SEXP prior_sigma2SEXP, SEXP x0SEXP, SEXP theta0SEXP, SEXP refSEXP, SEXP rj_valSEXP, SEXP ppiSEXP, SEXP nmaxSEXP, SEXP burnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type maxTime(maxTimeSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type dataX(dataXSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type datay(dataySEXP);
    Rcpp::traits::input_parameter< double >::type prior_sigma2(prior_sigma2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< double >::type ref(refSEXP);
    Rcpp::traits::input_parameter< double >::type rj_val(rj_valSEXP);
    Rcpp::traits::input_parameter< double >::type ppi(ppiSEXP);
    Rcpp::traits::input_parameter< int >::type nmax(nmaxSEXP);
    Rcpp::traits::input_parameter< int >::type burn(burnSEXP);
    rcpp_result_gen = Rcpp::wrap(bps_s_logit(maxTime, dataX, datay, prior_sigma2, x0, theta0, ref, rj_val, ppi, nmax, burn));
    return rcpp_result_gen;
END_RCPP
}
// bps_s_rr
List bps_s_rr(double maxTime, const arma::mat& dataX, const arma::vec& datay, double prior_sigma2, arma::vec x0, arma::vec theta0, double ref, double rj_val, double ppi, int nmax, int burn);
RcppExport SEXP _rjpdmp_bps_s_rr(SEXP maxTimeSEXP, SEXP dataXSEXP, SEXP dataySEXP, SEXP prior_sigma2SEXP, SEXP x0SEXP, SEXP theta0SEXP, SEXP refSEXP, SEXP rj_valSEXP, SEXP ppiSEXP, SEXP nmaxSEXP, SEXP burnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type maxTime(maxTimeSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type dataX(dataXSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type datay(dataySEXP);
    Rcpp::traits::input_parameter< double >::type prior_sigma2(prior_sigma2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< double >::type ref(refSEXP);
    Rcpp::traits::input_parameter< double >::type rj_val(rj_valSEXP);
    Rcpp::traits::input_parameter< double >::type ppi(ppiSEXP);
    Rcpp::traits::input_parameter< int >::type nmax(nmaxSEXP);
    Rcpp::traits::input_parameter< int >::type burn(burnSEXP);
    rcpp_result_gen = Rcpp::wrap(bps_s_rr(maxTime, dataX, datay, prior_sigma2, x0, theta0, ref, rj_val, ppi, nmax, burn));
    return rcpp_result_gen;
END_RCPP
}
// bps_n_rr
List bps_n_rr(double maxTime, const arma::mat& dataX, const arma::vec& datay, double prior_sigma2, arma::vec x0, arma::vec theta0, double ref, double rj_val, double ppi, int nmax, int burn);
RcppExport SEXP _rjpdmp_bps_n_rr(SEXP maxTimeSEXP, SEXP dataXSEXP, SEXP dataySEXP, SEXP prior_sigma2SEXP, SEXP x0SEXP, SEXP theta0SEXP, SEXP refSEXP, SEXP rj_valSEXP, SEXP ppiSEXP, SEXP nmaxSEXP, SEXP burnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type maxTime(maxTimeSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type dataX(dataXSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type datay(dataySEXP);
    Rcpp::traits::input_parameter< double >::type prior_sigma2(prior_sigma2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< double >::type ref(refSEXP);
    Rcpp::traits::input_parameter< double >::type rj_val(rj_valSEXP);
    Rcpp::traits::input_parameter< double >::type ppi(ppiSEXP);
    Rcpp::traits::input_parameter< int >::type nmax(nmaxSEXP);
    Rcpp::traits::input_parameter< int >::type burn(burnSEXP);
    rcpp_result_gen = Rcpp::wrap(bps_n_rr(maxTime, dataX, datay, prior_sigma2, x0, theta0, ref, rj_val, ppi, nmax, burn));
    return rcpp_result_gen;
END_RCPP
}
// gibbs_logit
List gibbs_logit(arma::mat dataX, arma::vec datay, arma::vec beta, arma::vec gamma, double ppi, int nsamples, double maxTime, double prior_sigma2);
RcppExport SEXP _rjpdmp_gibbs_logit(SEXP dataXSEXP, SEXP dataySEXP, SEXP betaSEXP, SEXP gammaSEXP, SEXP ppiSEXP, SEXP nsamplesSEXP, SEXP maxTimeSEXP, SEXP prior_sigma2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dataX(dataXSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type datay(dataySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type ppi(ppiSEXP);
    Rcpp::traits::input_parameter< int >::type nsamples(nsamplesSEXP);
    Rcpp::traits::input_parameter< double >::type maxTime(maxTimeSEXP);
    Rcpp::traits::input_parameter< double >::type prior_sigma2(prior_sigma2SEXP);
    rcpp_result_gen = Rcpp::wrap(gibbs_logit(dataX, datay, beta, gamma, ppi, nsamples, maxTime, prior_sigma2));
    return rcpp_result_gen;
END_RCPP
}
// zigzag_logit
List zigzag_logit(double maxTime, const arma::mat& dataX, const arma::vec& datay, double prior_sigma2, arma::vec x0, arma::vec theta0, double rj_val, double ppi, int nmax, int burn);
RcppExport SEXP _rjpdmp_zigzag_logit(SEXP maxTimeSEXP, SEXP dataXSEXP, SEXP dataySEXP, SEXP prior_sigma2SEXP, SEXP x0SEXP, SEXP theta0SEXP, SEXP rj_valSEXP, SEXP ppiSEXP, SEXP nmaxSEXP, SEXP burnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type maxTime(maxTimeSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type dataX(dataXSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type datay(dataySEXP);
    Rcpp::traits::input_parameter< double >::type prior_sigma2(prior_sigma2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< double >::type rj_val(rj_valSEXP);
    Rcpp::traits::input_parameter< double >::type ppi(ppiSEXP);
    Rcpp::traits::input_parameter< int >::type nmax(nmaxSEXP);
    Rcpp::traits::input_parameter< int >::type burn(burnSEXP);
    rcpp_result_gen = Rcpp::wrap(zigzag_logit(maxTime, dataX, datay, prior_sigma2, x0, theta0, rj_val, ppi, nmax, burn));
    return rcpp_result_gen;
END_RCPP
}
// zigzag_logit_ss
List zigzag_logit_ss(double maxTime, const arma::mat& dataX, const arma::vec& datay, double prior_sigma2, arma::vec x0, arma::vec theta0, arma::vec cvref, double rj_val, double ppi, int nmax, int burn);
RcppExport SEXP _rjpdmp_zigzag_logit_ss(SEXP maxTimeSEXP, SEXP dataXSEXP, SEXP dataySEXP, SEXP prior_sigma2SEXP, SEXP x0SEXP, SEXP theta0SEXP, SEXP cvrefSEXP, SEXP rj_valSEXP, SEXP ppiSEXP, SEXP nmaxSEXP, SEXP burnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type maxTime(maxTimeSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type dataX(dataXSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type datay(dataySEXP);
    Rcpp::traits::input_parameter< double >::type prior_sigma2(prior_sigma2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type cvref(cvrefSEXP);
    Rcpp::traits::input_parameter< double >::type rj_val(rj_valSEXP);
    Rcpp::traits::input_parameter< double >::type ppi(ppiSEXP);
    Rcpp::traits::input_parameter< int >::type nmax(nmaxSEXP);
    Rcpp::traits::input_parameter< int >::type burn(burnSEXP);
    rcpp_result_gen = Rcpp::wrap(zigzag_logit_ss(maxTime, dataX, datay, prior_sigma2, x0, theta0, cvref, rj_val, ppi, nmax, burn));
    return rcpp_result_gen;
END_RCPP
}
// zigzag_rr
List zigzag_rr(double maxTime, const arma::mat& dataX, const arma::vec& datay, double prior_sigma2, arma::vec x0, arma::vec theta0, double rj_val, double ppi, int nmax, int burn);
RcppExport SEXP _rjpdmp_zigzag_rr(SEXP maxTimeSEXP, SEXP dataXSEXP, SEXP dataySEXP, SEXP prior_sigma2SEXP, SEXP x0SEXP, SEXP theta0SEXP, SEXP rj_valSEXP, SEXP ppiSEXP, SEXP nmaxSEXP, SEXP burnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type maxTime(maxTimeSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type dataX(dataXSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type datay(dataySEXP);
    Rcpp::traits::input_parameter< double >::type prior_sigma2(prior_sigma2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< double >::type rj_val(rj_valSEXP);
    Rcpp::traits::input_parameter< double >::type ppi(ppiSEXP);
    Rcpp::traits::input_parameter< int >::type nmax(nmaxSEXP);
    Rcpp::traits::input_parameter< int >::type burn(burnSEXP);
    rcpp_result_gen = Rcpp::wrap(zigzag_rr(maxTime, dataX, datay, prior_sigma2, x0, theta0, rj_val, ppi, nmax, burn));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rjpdmp_bps_n_logit", (DL_FUNC) &_rjpdmp_bps_n_logit, 11},
    {"_rjpdmp_bps_s_logit", (DL_FUNC) &_rjpdmp_bps_s_logit, 11},
    {"_rjpdmp_bps_s_rr", (DL_FUNC) &_rjpdmp_bps_s_rr, 11},
    {"_rjpdmp_bps_n_rr", (DL_FUNC) &_rjpdmp_bps_n_rr, 11},
    {"_rjpdmp_gibbs_logit", (DL_FUNC) &_rjpdmp_gibbs_logit, 8},
    {"_rjpdmp_zigzag_logit", (DL_FUNC) &_rjpdmp_zigzag_logit, 10},
    {"_rjpdmp_zigzag_logit_ss", (DL_FUNC) &_rjpdmp_zigzag_logit_ss, 11},
    {"_rjpdmp_zigzag_rr", (DL_FUNC) &_rjpdmp_zigzag_rr, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_rjpdmp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}