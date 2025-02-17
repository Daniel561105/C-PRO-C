//326

#include <stdio.h>
#include <stdbool.h>

// have no idea why there is deviation in log(243)

bool isPowerOfThree(int n) {
    double a = log10(n)/log10(3);
    return fabs(fmod(a,1.0)) < 1e-10;
}

// log(3^x) = x*log3 = x*0.4771
// log(27)/log(3) = 3