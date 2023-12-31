// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/pg.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rpg_scalar
double rpg_scalar(const double h, const double z);
RcppExport SEXP _pg_rpg_scalar(SEXP hSEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(rpg_scalar(h, z));
    return rcpp_result_gen;
END_RCPP
}
// rpg_vector
arma::vec rpg_vector(unsigned int n, const double h, const double z);
RcppExport SEXP _pg_rpg_vector(SEXP nSEXP, SEXP hSEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(rpg_vector(n, h, z));
    return rcpp_result_gen;
END_RCPP
}
// rpg_hybrid
arma::vec rpg_hybrid(const arma::vec& h, const arma::vec& z);
RcppExport SEXP _pg_rpg_hybrid(SEXP hSEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(rpg_hybrid(h, z));
    return rcpp_result_gen;
END_RCPP
}
// rpg_scalar_loop
arma::vec rpg_scalar_loop(const arma::vec& h, const arma::vec& z);
RcppExport SEXP _pg_rpg_scalar_loop(SEXP hSEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(rpg_scalar_loop(h, z));
    return rcpp_result_gen;
END_RCPP
}
// rpg_gamma
arma::vec rpg_gamma(const arma::vec& h, const arma::vec& z, int trunc);
RcppExport SEXP _pg_rpg_gamma(SEXP hSEXP, SEXP zSEXP, SEXP truncSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type trunc(truncSEXP);
    rcpp_result_gen = Rcpp::wrap(rpg_gamma(h, z, trunc));
    return rcpp_result_gen;
END_RCPP
}
// rpg_devroye
arma::vec rpg_devroye(const arma::vec& h, const arma::vec& z);
RcppExport SEXP _pg_rpg_devroye(SEXP hSEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(rpg_devroye(h, z));
    return rcpp_result_gen;
END_RCPP
}
// rpg_sp
arma::vec rpg_sp(const arma::vec& h, const arma::vec& z);
RcppExport SEXP _pg_rpg_sp(SEXP hSEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(rpg_sp(h, z));
    return rcpp_result_gen;
END_RCPP
}
// rpg_normal
arma::vec rpg_normal(const arma::vec& h, const arma::vec& z);
RcppExport SEXP _pg_rpg_normal(SEXP hSEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(rpg_normal(h, z));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_pg_rpg_scalar", (DL_FUNC) &_pg_rpg_scalar, 2},
    {"_pg_rpg_vector", (DL_FUNC) &_pg_rpg_vector, 3},
    {"_pg_rpg_hybrid", (DL_FUNC) &_pg_rpg_hybrid, 2},
    {"_pg_rpg_scalar_loop", (DL_FUNC) &_pg_rpg_scalar_loop, 2},
    {"_pg_rpg_gamma", (DL_FUNC) &_pg_rpg_gamma, 3},
    {"_pg_rpg_devroye", (DL_FUNC) &_pg_rpg_devroye, 2},
    {"_pg_rpg_sp", (DL_FUNC) &_pg_rpg_sp, 2},
    {"_pg_rpg_normal", (DL_FUNC) &_pg_rpg_normal, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_pg(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
