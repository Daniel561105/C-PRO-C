#include <stdio.h>

void big_littlebit() {
    int a = 9;
    a++;
    printf("a = %d\n",a);
}

void small_littlebit() {
    int a = 19;
    a--;
    printf("a = %d\n",a);
}

int main() {
    int a = 29;
    big_littlebit();
    big_littlebit();
    small_littlebit();
    printf("a = %d",a);
    return 0;
}