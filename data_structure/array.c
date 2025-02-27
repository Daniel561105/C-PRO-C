#include <stdio.h>


int main() {
    int array[] = {1,3,5,7,9}; // auto 
    // int array[5] = {1,3,5,7,9} // initial the array
    int *ptr = array;
    printf("%d\n",sizeof(int));
    printf("%d\n",ptr);
    printf("%d\n",ptr+1);
    printf("%d\n",ptr+2);
    return 0;
}


// we can find out that memory of int cost 4, so the pointer will always +4 to the next one
// we can also know that the elements store in the memory space are contiguous

int main() {
    // int array[][] = {{1,2,3},{4,5,6}}; // only the first size can be auto
    int array[][3] = {{1,2,3},{4,5,6}};
    int *ptr = (int *)array;
    int *ptr2 = array[0];
    printf("%d\n",ptr);
    printf("%d\n",ptr+1);
    printf("%d\n",ptr+2);
    printf("%d\n",ptr+3);
    printf("%d\n",ptr+4);
    printf("%d\n",ptr+5);
    printf("=============\n");
    printf("%d\n",ptr2);
    printf("%d\n",ptr2+1);
    printf("%d\n",ptr2+6); // this is a space to store things but it i sstill undefined
    return 0;
}