//11

#include <stdio.h>

// two pointer and greedy, always keep the largest water only

int maxArea(int* height, int heightSize) {
    int ptr;
    int left = 0;
    int right = heightSize - 1;
    int width = heightSize - 2;
    int water = right*((height[left] < height[right])?height[left]:height[right]);
    int new_water;
    // water in the beginning
    while (width > 0) {
        if (height[left] < height[right]) {
        left += 1;
        new_water = ((height[left] < height[right])?height[left]:height[right])*width;
        }
        else {
            right -= 1;
            new_water = ((height[left] < height[right])?height[left]:height[right])*width;
        }
        if (water < new_water) {
            water = new_water;
        }
        width -= 1;
    }
    return water;
}

// O(n^2) situation which is not efficient
/*
int maxArea(int* height, int heightSize) {
    int water = 0;
    int wall = 0;
    int n = heightSize;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            wall = (height[i] < height[j]) ? height[i] : height[j];
            if (water < wall * (i - j)) {
                water = wall * (i - j);
            }
        }
    }
    return water;
}
*/