//2078

#include <stdio.h>


// time complexity O(N^2)
int maxDistance(int* colors, int colorsSize) {
    int distance = 0;
    int n = colorsSize;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (colors[i] != colors[j]) {
                int temp = i - j;
                if (temp > distance) {
                    distance = temp;
                }
            }
        }
    }
    return distance;
}


// time complexity O(N)
int maxDistance(int* colors, int colorsSize) {
    int left = 0, right = colorsSize - 1;
    // fix left
    while (colors[left] == colors[right]) {
        right -= 1;
    }
    int temp = right - left;
    right = colorsSize - 1;
    // fix right
    while (colors[left] == colors[right]) {
        left += 1;
    }
    if (temp < right - left) {
        temp = right - left;
    }
    return temp;
}