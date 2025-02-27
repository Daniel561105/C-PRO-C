//2591

#include <stdio.h>

// count people that gets 8 dollars, and no one is allow to get 4 dollars

int distMoney(int money, int children) {
    money = money - children;
    if (money < 0) return -1;
    // get 7 dollars and count++
    // first situation
    if (7*children < money) return children-1;
    // second situation
    if (7*children == money) return children;
    // third situation
    int count = money / 7;
    money = money - count*7;
    children = children - count;
    if (money == 3 && children == 1) return count - 1;
    else return count;
    return 0;
}

