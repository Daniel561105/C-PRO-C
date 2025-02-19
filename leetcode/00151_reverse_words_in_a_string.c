//151

#include <stdio.h>
#include <string.h>

char* reverseWords(char* s) {
    int n = strlen(s);
    // reverse the whole string
    for (int i = 0, j = n-1; i < j; i++, j--) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    
    // delete spaces in start and end
    int start = 0, end = n-1;
    while (s[start] == ' ') {
        start++;
    }
    while (s[end] == ' ') {
        end--;
    }
    for (int i = 0; i <= end - start; i++) {
        s[i] = s[start+i];
    }
    s[end-start+1] = '\0';

    // make spaces at middle into one space
    int a = 0, b = 0; // a must point to the first unspace char
    while (b < n) {
        if (s[b] != ' ') {
            s[a++] = s[b];
        }
        else if (s[a-1] != ' ') {
            s[a++] = ' ';
        }
        b++;
    }
    s[a] = '\0';
    
    // use two pointer to reverse every word back
    int ws = 0; // every single word start index
    while (ws < strlen(s)) {
        while (ws < strlen(s) && s[ws] == ' ') {
            ws++; // ws will be the beginning index of every word
        }
        int we = ws;
        while (we < strlen(s) && s [we] != ' ') {
            we++; // we will be the last index of every word
        }
        for (int i = ws, j = we-1; i < j; i++, j--) {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
        ws = we;
    }
    return s;
}