//788

#include <stdio.h>

int rotatedDigits(int n) {
    //to most 10000,no347,exists2569
    int count = 0;
    for (int i = 0; i <= n; i++) {
        int q = i%10;
        int w = (i-q)%100;
        int e = (i-q-w)%1000;
        int r = (i-q-w-e)%10000;
        if (q == 2 || q == 5 || q == 6 || q == 9 ||
        w == 20 || w == 50 || w == 60 || w == 90 ||
        e == 200 || e == 500 || e == 600 || e == 900 ||
        r == 2000|| r == 5000 || r == 6000 || r == 9000) {
            if (q != 3 && q != 4 && q != 7 &&
            w != 30 && w != 40 && w != 70 &&
            e != 300 && e != 400 && e != 700 &&
            r != 3000 && r != 4000 && r != 7000) {
                count++;
            }
        }
    }
    return count;
}