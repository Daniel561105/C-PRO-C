//2224

#include <stdio.h>

// four ways which is 1min, 5min, 15min, 60min

int convertTime(char* current, char* correct) {
    int hour = correct[0]*10 + correct[1] - current[0]*10 - current[1];
    int minute = correct[3]*10 + correct[4] - current[3]*10 - current[4];
    hour = hour * 60;
    int time = hour + minute;
    int count = 0;
    while (time != 0) {
        if (time - 60 >= 0) {
            time -= 60;
        }
        else if (time - 15 >= 0) {
            time -= 15;
        }
        else if (time - 5 >= 0) {
            time -= 5;
        }
        else if (time - 1 >= 0) {
            time -= 1;
        }
        count++;
    }
    return count;
}
