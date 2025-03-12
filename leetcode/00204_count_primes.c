//204

#include <stdio.h>
#include <stdbool.h>

/*
Sieve of Eratosthened -> a good method to get prime number
start from first prime number which is 2, remove all the multiples of 2 except 2
and remove all the multiples of 3 except 3, keep going on until we reach n^(1/2)
and all the rest number will be prime number of (1,n) 
*/

int countPrimes(int n) {
    if (n <= 2) return 0;
    bool prime[n];
    for (int i = 0; i < n; i++) {
        prime[i] = true;
    }
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i*i < n; i++) {
        if (prime[i]) {
            for (int j = i*i; j < n; j += i) {
                prime[j] = false;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (prime[i]) {
            sum++;
        }
    }
    return sum;
}