/*write text into file*/

#include <stdio.h>

int main() {
    FILE *ofp;
    int a =5678;
    char b = 'c';
    ofp = fopen("example.txt","w"); // write mode will cover old data
    if (ofp == NULL) {
        printf("error on opening file\n");
        return 1;
    }

    fputs("math is not easy at all\n",ofp); // put exact string into ofp
    fprintf(ofp,"Number is :%d",a);
    fseek(ofp,36,SEEK_SET); 
    fputs("5678****",ofp);
    printf("everything is alright\n");
    fclose(ofp);
    return 0;
}