/*
		read_header.c
*/

#include <stdio.h>
#include <stdlib.h>

#include "../inst/include/myPackage_types.h"

#include <RcppCommon.h>


namespace Rcpp {

  template <> SEXP wrap(const MY_HEADER_INFO& x) {
    std::vector<std::string> names;
    std::vector<SEXP> elements(1);
    // do something with the elements and names
    names.push_back("my_data");
    elements[0] = wrap( x.my_data );
    return 0;
  };
}

#include <Rcpp.h>

//' @param StringVector strings
//' @export
// [[Rcpp::export]]
Rcpp::MY_HEADER_INFO read_header(Rcpp::StringVector strings) {
  Rcpp::MY_HEADER_INFO *header;
    
  header = (Rcpp::MY_HEADER_INFO*)malloc(sizeof(Rcpp::MY_HEADER_INFO));
  memset(header, 0, sizeof(Rcpp::MY_HEADER_INFO));
    
  return *header;
}

