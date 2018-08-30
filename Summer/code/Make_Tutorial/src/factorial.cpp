#include "functions.h"

long int factorial(long int n){
   
   if(n!=1){
      return(n * factorial(n-1));
   }
   else return 1;
}
