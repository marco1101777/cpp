#include<bits/stdc++.h>

using namespace std ; 
#define str string 
using  lli  =  long long ;           

lli fpow(lli base, int pot) {
    if (pot == 0) {
        return 1LL;
                }
    if (pot == 1) {
        return base;
                  }

    if (pot % 2 == 0) {
        lli mitad = fpow(base, pot / 2);
        return mitad   * mitad  ; 
    }
    return fpow(base, pot - 1) * base;
        
      
}
