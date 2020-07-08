/*
		read_header.c
*/

#include <stdio.h>
#include <stdlib.h>

#include "../inst/include/myPackage_types.h"

#include <RcppCommon.h>


namespace Rcpp {

  template <> SEXP wrap(const MY_HEADER_INFO& x);

}

#include <Rcpp.h>

namespace Rcpp {
  template <> SEXP wrap(const MY_HEADER_INFO& x) {
    std::vector<std::string> names;
    std::vector<SEXP> elements(1);
    // do something with the elements and names
    names.push_back("my_data");
    elements[0] = wrap( x.my_data );
    
    Rcpp::List result(elements.size());
    for (size_t i = 0; i < elements.size(); ++i) {
      result[i] = elements[i];
    }
    result.attr("names") = Rcpp::wrap(names);
    // result can be return to R as a list   
    return( result );
  };
}

//' @useDynLib myPackage
//' @export
// [[Rcpp::export]]
  Rcpp::MY_HEADER_INFO read_header() {
    Rcpp::MY_HEADER_INFO *header = NULL;
    
    printf( "%ld\n", sizeof(Rcpp::MY_HEADER_INFO) );
    
    header = (Rcpp::MY_HEADER_INFO*)malloc(sizeof(Rcpp::MY_HEADER_INFO));
    memset(header, 0, sizeof(Rcpp::MY_HEADER_INFO));
    
    header->my_data = 10;
    
    return *header;
}

