/*strcpy(s1,s2) => give s1 the value of s2,both of them are string*/
/*seems like it is similar to s1 = s2,but the difference is 
strcpy(s1,s2) makes s1 exactly the same as s2 ,
s1 = s2 makes s1's memory space point to s2*/
#include <stdio.h>
#include <string.h>

int main() {
    char a1[] = "abcd";
    char a2[] = "not that hard but also not that easy";
    char b1[30];
    char *c; //pointer that points to b1
    strcpy(b1,a1);
    printf("%s\n",b1);
    c = strcpy(b1,a2);
    printf("%s",c);
    return 0;
}

