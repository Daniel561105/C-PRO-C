#include <stdio.h>

/*global variable*/
int a = 10;

void big_littlebit() {
    a++;
    printf("a = %d\n",a);
}

void small_littlebit() {
    a--;
    printf("a = %d\n",a);
}

int main() {
    big_littlebit();
    big_littlebit();
    small_littlebit();
    printf("a = %d",a);
    return 0;
}