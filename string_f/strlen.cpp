/*how does strlen works*/

#include <string.h>
#include <stdio.h>

int main() {
    int a;
    int b;
    a = strlen("ascii");
    printf("size of the string %d\n",sizeof(1231111111));
    printf("size of the string %d\n",sizeof(12311111111));
    printf("int %d\n",sizeof(int)); // sizeof shows how many bytes it need to store
    /*printf("char %d\n",sizeof(char));
    printf("float %d\n",sizeof(float));
    printf("long %d\n",sizeof(long));
    printf("short %d\n",sizeof(short));
    printf("bool %d\n",sizeof(bool));
    printf("double %d\n",sizeof(double));*/
    printf("\"123\" strlen is %d\n",strlen("123"));
    printf("\"abcd\" strlen is %d\n",strlen("abcd"));
    printf("three spaces size is %d\n",sizeof("   ")); //因為是計算記憶體的大小，所以會包含結尾的"\0"
    printf("three spaces strlen is %d\n",strlen("   "));
    return 0;
}