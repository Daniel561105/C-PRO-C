#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i,total,big = 5;
    printf("list the number from 1 to 5\n");
    for (i = 1; i <= big; i++) {
        printf("%d\t",i);
        total += i;
    }
    printf("\ntotal = %d\n",total);
    system("pause");
    return 0;
}