#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char *num1 = "123";
    char *num2 = "567";
    int a = 0; 
    int b = 0;
    
    for (int i = 0;i < strlen(num1);i++) { // run three times if num1 = 123
        a = a * 10 + (num1[i] - '0'); // a = 1 , a = 1*10 + 2 = 12 , a = 12*10 + 3 = 123
    }
    for (int j = 0;j < strlen(num2);j++) {
        b = b * 10 + (num2[j] - '0');
    }

    printf("%d %d %d",a,b,a+b);
    return 0;
}