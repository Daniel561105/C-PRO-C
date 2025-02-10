/*output the pointer that points to the specific char*/

#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "it is a ordinary day";
    printf("%s\n",strchr(a,'d'));
    printf("%s\n",strrchr(a,'d'));  // r => reverse
    return 0;
}