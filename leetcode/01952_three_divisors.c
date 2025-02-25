//1952
 
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isThree(int n) {
    if (n == 2 || n == 1) return 0;
    double check = sqrt(n);
    if (fmod(check,1.0) != 0) return 0;
    int prime = sqrt(n);
    for (int i = prime - 1; i > 1; i--) {
        if (prime % i == 0) return 0;
    }
    return 1;
}

/*
only the square of prime number has exactly three divisors
EX : 26 = 2 x 13 => 2 x 2 = 4 
     44 = 2 x 2 x 11 => 3 x 2 = 6
*/