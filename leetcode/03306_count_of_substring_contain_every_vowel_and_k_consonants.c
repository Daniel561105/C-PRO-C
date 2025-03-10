//3306

#include <stdio.h>

// maybe the hardest one i ever done (update 0310)
// thankgod of the hint that atleast(k) and atleast(k+1) makes the answer

long long atleast(char* word, int n, int k) {
    long long numValid = 0;
    int start = 0, end = 0;
    int consonents = 0;
    int vowelsCount[5] = {0};
    while (end < n) {
        if (word[end] == 'a') vowelsCount[0]++;
        else if (word[end] == 'e') vowelsCount[1]++;
        else if (word[end] == 'i') vowelsCount[2]++;
        else if (word[end] == 'o') vowelsCount[3]++;
        else if (word[end] == 'u') vowelsCount[4]++;
        else consonents++;
        while (consonents >= k && vowelsCount[0] > 0 && vowelsCount[1] > 0 && vowelsCount[2] > 0 
                && vowelsCount[3] > 0 && vowelsCount[4] > 0) {
            numValid += n-end; // means start to end are valid, the rest can be either added or not
            if (word[start] == 'a') vowelsCount[0]--;
            else if (word[start] == 'e') vowelsCount[1]--;
            else if (word[start] == 'i') vowelsCount[2]--;
            else if (word[start] == 'o') vowelsCount[3]--;
            else if (word[start] == 'u') vowelsCount[4]--;
            else consonents--;
            start++;
        }
        end++;
    }
    return numValid;
}

long long countOfSubstrings(char* word, int k) {
    return atleast(word,strlen(word),k)-atleast(word,strlen(word),k+1);
}