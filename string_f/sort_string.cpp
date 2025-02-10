/*to sort ddsca => acdds*/
/*qsort is a type of void which means it doesn't return any datatype*/
/*if void is the parameter of a function that means it doesn't need parameter*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*for the last parameter of qsort*/
int cmp_string(const void *a1,const void *a2) {
    return (*(char *)a1 - *(char *)a2);
}

int main() {
    char a[] = "hshshskasj";
    qsort(a,strlen(a),sizeof(char),cmp_string);
    printf("%s",a);
    return 0;
}