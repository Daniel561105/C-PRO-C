//2027

#include <stdio.h>

// one move means to make three consecutive index to 'O'

int minimumMoves(char* s) {
    int count = 0;
    int n = strlen(s);
    if (n < 4) {
        for (int i = 0; i < n; i++) {
            if (s[i] == 'X') return 1;
            else return 0;
        }
    }

    int temp = 0;
    // if s[n-3] == 'X' then means is lucky, if s[n-3] == 'O' then last two won't be change
    if (s[n-3] == 'X') {
        if (s[n-2] == 'X' || s[n-1] == 'X') {
            temp = 1;
            s[n-3] = 'O';
            s[n-2] = 'O';
            s[n-1] = 'O';
        }
    }
    else {
        if (s[n-2] == 'X' || s[n-1] == 'X') {
            temp = 1;
        }
    }

    for (int i = 0; i < n-2; i++) {
        if (s[i] == 'X') {
            s[i] = 'O';
            s[i+1] = 'O';
            s[i+2] = 'O';
            count += 1;
        }
    }
    return count + temp;
}