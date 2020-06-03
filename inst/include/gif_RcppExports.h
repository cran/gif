// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_gif_RCPPEXPORTS_H_GEN_
#define RCPP_gif_RCPPEXPORTS_H_GEN_

#include <RcppEigen.h>
#include <Rcpp.h>

namespace gif {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("gif", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("gif", "_gif_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in gif");
            }
        }
    }

    inline Eigen::SparseMatrix<double> bcd(Eigen::MatrixXd& S, Eigen::MatrixXi& act_set, int iter_max = 10, double eps = 1e-3) {
        typedef SEXP(*Ptr_bcd)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_bcd p_bcd = NULL;
        if (p_bcd == NULL) {
            validateSignature("Eigen::SparseMatrix<double>(*bcd)(Eigen::MatrixXd&,Eigen::MatrixXi&,int,double)");
            p_bcd = (Ptr_bcd)R_GetCCallable("gif", "_gif_bcd");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_bcd(Shield<SEXP>(Rcpp::wrap(S)), Shield<SEXP>(Rcpp::wrap(act_set)), Shield<SEXP>(Rcpp::wrap(iter_max)), Shield<SEXP>(Rcpp::wrap(eps)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Eigen::SparseMatrix<double> >(rcpp_result_gen);
    }

    inline List soft_GT(Eigen::MatrixXd& S, double lambda, Eigen::MatrixXi& act_set) {
        typedef SEXP(*Ptr_soft_GT)(SEXP,SEXP,SEXP);
        static Ptr_soft_GT p_soft_GT = NULL;
        if (p_soft_GT == NULL) {
            validateSignature("List(*soft_GT)(Eigen::MatrixXd&,double,Eigen::MatrixXi&)");
            p_soft_GT = (Ptr_soft_GT)R_GetCCallable("gif", "_gif_soft_GT");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_soft_GT(Shield<SEXP>(Rcpp::wrap(S)), Shield<SEXP>(Rcpp::wrap(lambda)), Shield<SEXP>(Rcpp::wrap(act_set)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<List >(rcpp_result_gen);
    }

}

#endif // RCPP_gif_RCPPEXPORTS_H_GEN_
