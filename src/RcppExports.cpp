// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// DOptimality
double DOptimality(const Eigen::MatrixXd& currentDesign);
RcppExport SEXP _skpr_DOptimality(SEXP currentDesignSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type currentDesign(currentDesignSEXP);
    rcpp_result_gen = Rcpp::wrap(DOptimality(currentDesign));
    return rcpp_result_gen;
END_RCPP
}
// DOptimalityLog
double DOptimalityLog(const Eigen::MatrixXd& currentDesign);
RcppExport SEXP _skpr_DOptimalityLog(SEXP currentDesignSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type currentDesign(currentDesignSEXP);
    rcpp_result_gen = Rcpp::wrap(DOptimalityLog(currentDesign));
    return rcpp_result_gen;
END_RCPP
}
// DOptimalityBlocked
double DOptimalityBlocked(const Eigen::MatrixXd& currentDesign, const Eigen::MatrixXd& blockedVar);
RcppExport SEXP _skpr_DOptimalityBlocked(SEXP currentDesignSEXP, SEXP blockedVarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type currentDesign(currentDesignSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type blockedVar(blockedVarSEXP);
    rcpp_result_gen = Rcpp::wrap(DOptimalityBlocked(currentDesign, blockedVar));
    return rcpp_result_gen;
END_RCPP
}
// DOptimalityBlockedLog
double DOptimalityBlockedLog(const Eigen::MatrixXd& currentDesign, const Eigen::MatrixXd& blockedVar);
RcppExport SEXP _skpr_DOptimalityBlockedLog(SEXP currentDesignSEXP, SEXP blockedVarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type currentDesign(currentDesignSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type blockedVar(blockedVarSEXP);
    rcpp_result_gen = Rcpp::wrap(DOptimalityBlockedLog(currentDesign, blockedVar));
    return rcpp_result_gen;
END_RCPP
}
// calculateDEfficiency
double calculateDEfficiency(const Eigen::MatrixXd& currentDesign);
RcppExport SEXP _skpr_calculateDEfficiency(SEXP currentDesignSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type currentDesign(currentDesignSEXP);
    rcpp_result_gen = Rcpp::wrap(calculateDEfficiency(currentDesign));
    return rcpp_result_gen;
END_RCPP
}
// AOptimality
double AOptimality(const Eigen::MatrixXd& currentDesign);
RcppExport SEXP _skpr_AOptimality(SEXP currentDesignSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type currentDesign(currentDesignSEXP);
    rcpp_result_gen = Rcpp::wrap(AOptimality(currentDesign));
    return rcpp_result_gen;
END_RCPP
}
// calculateAOptimalityPseudo
double calculateAOptimalityPseudo(const Eigen::MatrixXd& currentDesign);
RcppExport SEXP _skpr_calculateAOptimalityPseudo(SEXP currentDesignSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type currentDesign(currentDesignSEXP);
    rcpp_result_gen = Rcpp::wrap(calculateAOptimalityPseudo(currentDesign));
    return rcpp_result_gen;
END_RCPP
}
// IOptimality
double IOptimality(const Eigen::MatrixXd& currentDesign, const Eigen::MatrixXd& momentsMatrix, const Eigen::MatrixXd& blockedVar);
RcppExport SEXP _skpr_IOptimality(SEXP currentDesignSEXP, SEXP momentsMatrixSEXP, SEXP blockedVarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type currentDesign(currentDesignSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type momentsMatrix(momentsMatrixSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type blockedVar(blockedVarSEXP);
    rcpp_result_gen = Rcpp::wrap(IOptimality(currentDesign, momentsMatrix, blockedVar));
    return rcpp_result_gen;
END_RCPP
}
// calcAliasTrace
double calcAliasTrace(const Eigen::MatrixXd& currentDesign, const Eigen::MatrixXd& aliasMatrix);
RcppExport SEXP _skpr_calcAliasTrace(SEXP currentDesignSEXP, SEXP aliasMatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type currentDesign(currentDesignSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type aliasMatrix(aliasMatrixSEXP);
    rcpp_result_gen = Rcpp::wrap(calcAliasTrace(currentDesign, aliasMatrix));
    return rcpp_result_gen;
END_RCPP
}
// covarianceMatrixPseudo
Eigen::MatrixXd covarianceMatrixPseudo(const Eigen::MatrixXd& design);
RcppExport SEXP _skpr_covarianceMatrixPseudo(SEXP designSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type design(designSEXP);
    rcpp_result_gen = Rcpp::wrap(covarianceMatrixPseudo(design));
    return rcpp_result_gen;
END_RCPP
}
// getPseudoInverse
Eigen::MatrixXd getPseudoInverse(const Eigen::MatrixXd& currentDesign);
RcppExport SEXP _skpr_getPseudoInverse(SEXP currentDesignSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type currentDesign(currentDesignSEXP);
    rcpp_result_gen = Rcpp::wrap(getPseudoInverse(currentDesign));
    return rcpp_result_gen;
END_RCPP
}
// GEfficiency
double GEfficiency(const Eigen::MatrixXd& currentDesign, const Eigen::MatrixXd& candset);
RcppExport SEXP _skpr_GEfficiency(SEXP currentDesignSEXP, SEXP candsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type currentDesign(currentDesignSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type candset(candsetSEXP);
    rcpp_result_gen = Rcpp::wrap(GEfficiency(currentDesign, candset));
    return rcpp_result_gen;
END_RCPP
}
// genOptimalDesign
List genOptimalDesign(Eigen::MatrixXd initialdesign, const Eigen::MatrixXd& candidatelist, const std::string condition, const Eigen::MatrixXd& momentsmatrix, Eigen::VectorXd initialRows, Eigen::MatrixXd aliasdesign, const Eigen::MatrixXd& aliascandidatelist, double minDopt, double tolerance, int augmentedrows);
RcppExport SEXP _skpr_genOptimalDesign(SEXP initialdesignSEXP, SEXP candidatelistSEXP, SEXP conditionSEXP, SEXP momentsmatrixSEXP, SEXP initialRowsSEXP, SEXP aliasdesignSEXP, SEXP aliascandidatelistSEXP, SEXP minDoptSEXP, SEXP toleranceSEXP, SEXP augmentedrowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type initialdesign(initialdesignSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type candidatelist(candidatelistSEXP);
    Rcpp::traits::input_parameter< const std::string >::type condition(conditionSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type momentsmatrix(momentsmatrixSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type initialRows(initialRowsSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type aliasdesign(aliasdesignSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type aliascandidatelist(aliascandidatelistSEXP);
    Rcpp::traits::input_parameter< double >::type minDopt(minDoptSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< int >::type augmentedrows(augmentedrowsSEXP);
    rcpp_result_gen = Rcpp::wrap(genOptimalDesign(initialdesign, candidatelist, condition, momentsmatrix, initialRows, aliasdesign, aliascandidatelist, minDopt, tolerance, augmentedrows));
    return rcpp_result_gen;
END_RCPP
}
// genSplitPlotOptimalDesign
List genSplitPlotOptimalDesign(Eigen::MatrixXd initialdesign, Eigen::MatrixXd candidatelist, const Eigen::MatrixXd& blockeddesign, const std::string condition, const Eigen::MatrixXd& momentsmatrix, Eigen::VectorXi& initialRows, const Eigen::MatrixXd& blockedVar, Eigen::MatrixXd aliasdesign, Eigen::MatrixXd aliascandidatelist, double minDopt, List interactions, const Eigen::MatrixXd disallowed, const bool anydisallowed, double tolerance);
RcppExport SEXP _skpr_genSplitPlotOptimalDesign(SEXP initialdesignSEXP, SEXP candidatelistSEXP, SEXP blockeddesignSEXP, SEXP conditionSEXP, SEXP momentsmatrixSEXP, SEXP initialRowsSEXP, SEXP blockedVarSEXP, SEXP aliasdesignSEXP, SEXP aliascandidatelistSEXP, SEXP minDoptSEXP, SEXP interactionsSEXP, SEXP disallowedSEXP, SEXP anydisallowedSEXP, SEXP toleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type initialdesign(initialdesignSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type candidatelist(candidatelistSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type blockeddesign(blockeddesignSEXP);
    Rcpp::traits::input_parameter< const std::string >::type condition(conditionSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type momentsmatrix(momentsmatrixSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi& >::type initialRows(initialRowsSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type blockedVar(blockedVarSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type aliasdesign(aliasdesignSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type aliascandidatelist(aliascandidatelistSEXP);
    Rcpp::traits::input_parameter< double >::type minDopt(minDoptSEXP);
    Rcpp::traits::input_parameter< List >::type interactions(interactionsSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type disallowed(disallowedSEXP);
    Rcpp::traits::input_parameter< const bool >::type anydisallowed(anydisallowedSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    rcpp_result_gen = Rcpp::wrap(genSplitPlotOptimalDesign(initialdesign, candidatelist, blockeddesign, condition, momentsmatrix, initialRows, blockedVar, aliasdesign, aliascandidatelist, minDopt, interactions, disallowed, anydisallowed, tolerance));
    return rcpp_result_gen;
END_RCPP
}
// genBlockedOptimalDesign
List genBlockedOptimalDesign(Eigen::MatrixXd initialdesign, const Eigen::MatrixXd& candidatelist, const std::string condition, Eigen::MatrixXd V, const Eigen::MatrixXd& momentsmatrix, Eigen::VectorXi& initialRows, Eigen::MatrixXd aliasdesign, const Eigen::MatrixXd& aliascandidatelist, double minDopt, double tolerance, int augmentedrows);
RcppExport SEXP _skpr_genBlockedOptimalDesign(SEXP initialdesignSEXP, SEXP candidatelistSEXP, SEXP conditionSEXP, SEXP VSEXP, SEXP momentsmatrixSEXP, SEXP initialRowsSEXP, SEXP aliasdesignSEXP, SEXP aliascandidatelistSEXP, SEXP minDoptSEXP, SEXP toleranceSEXP, SEXP augmentedrowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type initialdesign(initialdesignSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type candidatelist(candidatelistSEXP);
    Rcpp::traits::input_parameter< const std::string >::type condition(conditionSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type V(VSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type momentsmatrix(momentsmatrixSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi& >::type initialRows(initialRowsSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type aliasdesign(aliasdesignSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type aliascandidatelist(aliascandidatelistSEXP);
    Rcpp::traits::input_parameter< double >::type minDopt(minDoptSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< int >::type augmentedrows(augmentedrowsSEXP);
    rcpp_result_gen = Rcpp::wrap(genBlockedOptimalDesign(initialdesign, candidatelist, condition, V, momentsmatrix, initialRows, aliasdesign, aliascandidatelist, minDopt, tolerance, augmentedrows));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_skpr_DOptimality", (DL_FUNC) &_skpr_DOptimality, 1},
    {"_skpr_DOptimalityLog", (DL_FUNC) &_skpr_DOptimalityLog, 1},
    {"_skpr_DOptimalityBlocked", (DL_FUNC) &_skpr_DOptimalityBlocked, 2},
    {"_skpr_DOptimalityBlockedLog", (DL_FUNC) &_skpr_DOptimalityBlockedLog, 2},
    {"_skpr_calculateDEfficiency", (DL_FUNC) &_skpr_calculateDEfficiency, 1},
    {"_skpr_AOptimality", (DL_FUNC) &_skpr_AOptimality, 1},
    {"_skpr_calculateAOptimalityPseudo", (DL_FUNC) &_skpr_calculateAOptimalityPseudo, 1},
    {"_skpr_IOptimality", (DL_FUNC) &_skpr_IOptimality, 3},
    {"_skpr_calcAliasTrace", (DL_FUNC) &_skpr_calcAliasTrace, 2},
    {"_skpr_covarianceMatrixPseudo", (DL_FUNC) &_skpr_covarianceMatrixPseudo, 1},
    {"_skpr_getPseudoInverse", (DL_FUNC) &_skpr_getPseudoInverse, 1},
    {"_skpr_GEfficiency", (DL_FUNC) &_skpr_GEfficiency, 2},
    {"_skpr_genOptimalDesign", (DL_FUNC) &_skpr_genOptimalDesign, 10},
    {"_skpr_genSplitPlotOptimalDesign", (DL_FUNC) &_skpr_genSplitPlotOptimalDesign, 14},
    {"_skpr_genBlockedOptimalDesign", (DL_FUNC) &_skpr_genBlockedOptimalDesign, 11},
    {NULL, NULL, 0}
};

RcppExport void R_init_skpr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
