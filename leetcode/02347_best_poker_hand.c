//2347

#include <stdio.h>

char* bestHand(int* ranks, int ranksSize, char* suits, int suitsSize) {
    int hash[4] = {0};
    // i actually wonder why hash[suits[i]-'a']++; won't work
    for (int i = 0; i< suitsSize; i++) {
        if (suits[i] == 'a') hash[0]++;
        else if (suits[i] == 'b') hash[1]++;
        else if (suits[i] == 'c') hash[2]++;
        else if (suits[i] == 'd') hash[3]++;
    }
    for (int i = 0; i < 4; i++) {
        if (hash[i] == 5) return "Flush";
    }
    int map[14] = {0};
    for (int i = 0; i < ranksSize; i++) {
        map[ranks[i]]++;
    }
    for (int i = 1; i < 14; i++) {
        if (map[i] >= 3) {
            return "Three of a Kind";
        }
    }
    for (int i = 1; i < 14; i++) {
        if (map[i] >= 2) {
            return "Pair";
        }
    }
    return "High Card";
}

/*
there is going to be four answer
1. "Flush" which means five with same pairs
2. "Three of a kind" three with the same ranks
3. "Pair" two with same ranks
4. "High Card" else situation
*/