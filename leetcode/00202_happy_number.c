//202

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// the question is to find out it will end with 1 or not
// give a enough big number to run square_in_rule to find

int square_in_rule(int num) {
    int result = 0;
    while (num != 0) {
        result += pow(num % 10,2);
        num = num / 10;
    }
    num = result;
    return num;
}

bool isHappy(int n) {
    for (int i = 0;i < 100;i++) {
        if (square_in_rule(n) == 1) {
            return 1;
        }
        n = square_in_rule(n);
    }
    return 0;
}


/*
2,4,16,37,58,89,145,42,20,4
3,9,81,65,61,37......
5,25,29,85,89......
6,36,45,41,17,50,25.......
7,49,97,130,10,1
8,64,52,29........
*/

