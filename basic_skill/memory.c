// this is going to be a article about memory thm in C

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int main() {
  int *dynArr;
  int arrLen = 10;

  // memory allocate (int costs 4 byte so malloc calls for a 40 byte space)
  dynArr = (int *)malloc( arrLen * sizeof(int) );

  if( dynArr == NULL ) {
    // 無法取得記憶體空間
    fprintf(stderr, "Error: unable to allocate required memory\n");
    return 1;
  }

  // 使用動態取得的記憶體空間
  int i;
  for (i = 0; i < arrLen; ++i) {
    dynArr[i] = i;
    printf("%d ", dynArr[i]);
  }

  // to avoid memory leak, after work is done, give those space back to computer
  free(dynArr);

  return 0;
}