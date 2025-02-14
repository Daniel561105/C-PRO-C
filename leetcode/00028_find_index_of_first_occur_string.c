//28

#include <stdio.h>
#include <string.h>
/*
haystack = "sadbutsad"
needle = "sad"
*/
// 一個指針指向haystack一個指向needle，for一個跑內一個跑外，如果有完全符合needle的出現，就返回當前index
int strStr(char* haystack, char* needle) {
    int l1 = strlen(needle);
    int l2 = strlen(haystack);
    for (int i = 0;i < l2 - l1 + 1;i++) {
        int j;
        for (j = 0;j < l1;j++) {
            if (haystack[i + j] != needle[j]) {
                break;  // as long as the first element is not same jump out
            }
        }
        if (j == l1) return i;
    }
    return -1;
}