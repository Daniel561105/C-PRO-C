//125

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isPalindrome(char* s) {
    // delete space and punctuation
    int i = 0, j = 0;
    while (s[i] != '\0') {
        if (isalnum(s[i])) {
            s[j++] = tolower(s[i]);
        }
        i++;
    }
    s[j] = '\0';

    int a = 0;
    int b = strlen(s) - 1;
    while (a < b) {
        if (s[a] == s[b]) {
            a++;
            b--;
        }
        else {
            return 0;
        }
    }
    return 1;
}


// testing is generate by gpt
int main() {
    // 測試用例
    char test1[] = "A man, a plan, a canal, Panama";
    char test2[] = "race a car";
    char test3[] = "OP";
    
    // 測試回文檢查函數
    printf("Test 1: \"%s\"\n", test1);
    if (isPalindrome(test1)) {
        printf("It is a palindrome!\n");
    } else {
        printf("It is not a palindrome.\n");
    }

    printf("\nTest 2: \"%s\"\n", test2);
    if (isPalindrome(test2)) {
        printf("It is a palindrome!\n");
    } else {
        printf("It is not a palindrome.\n");
    }

    printf("\nTest 3: \"%s\"\n", test3);
    if (isPalindrome(test3)) {
        printf("It is a palindrome!\n");
    } else {
        printf("It is not a palindrome.\n");
    }

    return 0;
}