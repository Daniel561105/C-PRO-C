//278

#include <stdio.h>
#include <stdbool.h>

// as long as a bad version is find, the rest of the version will be bad
// so i assume the middle one will be bad, if true then means the first bad 
// is before, false then the first bad is after
int firstBadVersion(int n) {
    long int left = 1;
    long int mid;
    while (left < n) {
        mid = (left + n) / 2;
        if (isBadVersion(mid) == true) {
            n = mid;
        }
        else {
            left = mid + 1;
        }
    }
    return left;
}

/*
1,2,3,4,5,6,7
o,o,o,x,x,x,x
*/