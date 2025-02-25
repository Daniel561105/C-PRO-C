//50

#include <stdio.h>
#include <stdbool.h>

// one step waste one oil, according to greedy(always get most oil as he can), if fuel < nums[i] then fuel = nums[i]

bool canJump(int* nums, int numsSize) {
    if (nums[0] == 0 && numsSize != 1) return 0;
    int fuel = nums[0];
    for (int i = 1; i < numsSize; i++) {
        fuel -= 1;
        if (fuel <= nums[i]) {
            fuel = nums[i];
        }
        if (fuel == 0 && i != numsSize-1) return 0;
    }
    return 1;
}

/*
[2,3,1,1,4] => true
[3,2,1,0,4] => false
*/

/*
***useful comment in discussion***
1.We're driving from left to right, starting with no fuel
2.Each position contains a certain number of fuel replenishment
3.At each position, we can exchange our fuel by the fuel of that position, or keep our actual fuel (greedy choice)
  Moving right spends 1 unity of fuel
4.Negative fuel at any point means we won't be able to reach the end
*/