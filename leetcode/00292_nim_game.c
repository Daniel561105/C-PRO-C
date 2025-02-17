//292

#include <stdio.h>
#include <stdbool.h>

// everytime me and my opponent can choose 1~3 stones,whoever choose the last one wins

bool canWinNim(int n) {
    if (n % 4 == 0) return 0;
    return 1;
}

//i can make the stones remaining after my first choice by a number that is divisible by 4
//as long as it is not a 4n at first ,i will always win the game when i perform optimally