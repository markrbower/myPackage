// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/myPackage_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// read_header
Rcpp::MY_HEADER_INFO read_header();
RcppExport SEXP _myPackage_read_header() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(read_header());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_myPackage_read_header", (DL_FUNC) &_myPackage_read_header, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_myPackage(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
