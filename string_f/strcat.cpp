/*strcat(s1,s2) is to stick s2 after s1,so s1 has to have enough space for s2 to fit in*/

#include <stdio.h>
#include <string.h>

int main() {
    char a[80] = "We must accept ";
    char b[] = "finite disappointment, but never";
    char c[] = " lose infinite hope.";
    char *d;
    d = strcat(a,b);
    printf("%s\n",strcat(d,c)); //我們必須接受有限的困難，但我們不可以失去無限的希望
    printf("the size of this motto is %d",strlen(strcat(d,c)));
    return 0;
}