#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, max;
    printf("enter a number :");
    scanf("%d", &max);
    a = 5;
    if ( max > a ) {
        printf("%d is bigger than a\n", max);
    }
    else if (max == a) {
        printf("%d is equal to %d\n", max , a);
    }
    else {
        printf("%d is smaller than a\n", max);
    }
    system("pause");
    return 0;
}