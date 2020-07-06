#include <RcppCommon.h>

namespace Rcpp {
  typedef struct {
    int my_data;
  } MY_HEADER_INFO;

  template <> SEXP wrap(const MY_HEADER_INFO& x);
  
  template<>
  MY_HEADER_INFO* as(SEXP x);
} 
