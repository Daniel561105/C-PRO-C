//strcpy(a,b) is not the same as a = b ,only one is independent 

#include <stdio.h>

char *sc_strcpy(char *s1,char *s2) {
    int i = 0;
    while (s2[i] != '\0') { //one to one of one by one to shoot on s1
        s1[i] = s2[i];
        i++;
    }
    return s1;
} 


int main() {
    char a[] = "not rigorous strcpy";
    char b[20];
    sc_strcpy(b,a);
    printf("%s\n",b);
    return 0;
}
