// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// simulate_student
std::vector<int> simulate_student();
RcppExport SEXP _RcppStudent_simulate_student() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(simulate_student());
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_RcppStudentEx();

static const R_CallMethodDef CallEntries[] = {
    {"_RcppStudent_simulate_student", (DL_FUNC) &_RcppStudent_simulate_student, 0},
    {"_rcpp_module_boot_RcppStudentEx", (DL_FUNC) &_rcpp_module_boot_RcppStudentEx, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppStudent(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
