//1071

#include <stdio.h>

int gcd(int a, int b) {
    int n = (a>b)?b:a;
    int record = 0;
    for (int i = 1; i <= n; i++) {
        if (a % i == 0 && b % i == 0) {
            record = i;
        }
    }
    return record;
}

char* gcdOfStrings(char* str1, char* str2) {
    int n = gcd(strlen(str1),strlen(str2));
    char* temp = (char*)malloc((n+1)*sizeof(char));
    int count1 = strlen(str1)/n; // repeat how many times
    int count2 = strlen(str2)/n;
    for (int i = 0; i < n; i++) {
        temp[i] = str1[i];
    }
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != temp[i%n]) {
            return "";
        }
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] != temp[i%n]) {
            return "";
        }
    }
    temp[n] = '\0';
    return temp;
}