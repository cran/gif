# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

bcd <- function(S, act_set, iter_max = 10L, eps = 1e-3) {
    .Call(`_gif_bcd`, S, act_set, iter_max, eps)
}

soft_GT <- function(S, lambda, act_set) {
    .Call(`_gif_soft_GT`, S, lambda, act_set)
}

# Register entry points for exported C++ functions
methods::setLoadAction(function(ns) {
    .Call(`_gif_RcppExport_registerCCallable`)
})
