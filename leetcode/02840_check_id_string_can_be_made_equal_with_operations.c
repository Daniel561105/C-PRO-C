#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char* sep_even(char* k) {
    int n = strlen(k);
    int space = n*2+1;
    char* tmp = (char*)malloc(sizeof(char)*space);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            tmp[count++] = k[i];
        }
    }
    tmp[count] = '\0';
    return tmp;
}

char* sep_odd(char* k) {
    int n = strlen(k);
    int space = n*2+1;
    char* tmp = (char*)malloc(sizeof(char)*space);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) {
            tmp[count++] = k[i];
        }
    }
    tmp[count] = '\0';
    return tmp;
}

bool checkStrings(char* s1, char* s2) {
    //partition str to two as even and odd
    int hash1[26] = {0};
    int hash2[26] = {0};
    int hash3[26] = {0};
    int hash4[26] = {0};
    char* s11 = sep_even(s1);
    char* s21 = sep_even(s2);
    char* s12 = sep_odd(s1);
    char* s22 = sep_odd(s2);
    int c11 = strlen(s11);
    int c12 = strlen(s12);
    int c21 = strlen(s21);
    int c22 = strlen(s22);
    for (int i = 0; i < c11; i++) {
        hash1[s11[i] - 'a']++;
    }
    for (int i = 0; i < c21; i++) {
        hash2[s21[i] - 'a']++;
    }
    for (int i = 0; i < c12; i++) {
        hash3[s12[i] - 'a']++;
    }
    for (int i = 0; i < c22; i++) {
        hash4[s22[i] - 'a']++;
    }
    for (int i = 0; i<26; i++) {
        if (hash1[i] != hash2[i] || hash3[i] != hash4[i]) {
            return 0;
        }
    }
    return 1;
}