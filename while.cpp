/*1-100odd number*/

#include <stdio.h>
#include <stdlib.h>

int main() {
/*for + math*/
    int i ;
    for ( i = 1; i <= 50; i++) {
        if (i % 2 == 1) {
            printf("%d ",i);
        }
    }
    printf("\n\n");

/*for*/
    for (i = 1; i <= 50; i += 2) {
        printf("%d ",i);
    }
    printf("\n\n");

/*while*/
    i = 1;
    while (i >= 1 && i <= 50) {
        printf("%d ", i);
        i += 2;
    }
    printf("\n\n");

/*do while*/
/*do while => 概念是一直做do裡面的程式直到while的條件變成false為止*/
    i = 1;
    do {
        if (i % 2 == 1) 
            printf("%d ",i);
        i += 1;
        
    } while (i <= 50);
    return 0;
}