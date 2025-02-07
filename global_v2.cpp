#include <stdio.h>

/*global variable*/
int a;

void big_littlebit() {
    a++;
    printf("a = %d\n",a);
}

void small_littlebit() {
    a = 20;
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