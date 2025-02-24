#include <stdio.h>

// a recursion that calls itself, according to different ways to call, they have differ name 
int factorial(int n) {
    int result;
    if (n == 0) return 1;
    else {
        result = n * factorial(n-1);
    }
    return result;
}

int main() {
    int c;
    printf("input a positive integer : ");
    scanf("%d",&c);
    printf("%d is the factorial of %d",factorial(c),c);
    return 0;
}