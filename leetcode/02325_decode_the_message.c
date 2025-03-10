//2325

#include <stdio.h>

// main idea is make a map that shoot old letter to new letter

typedef struct {
    char before;
    char after;
} dict;

char* decodeMessage(char* key, char* message) {
    dict* map = (dict*)malloc(26*sizeof(dict));
    char alpha[] = "abcdefghijklmnopqrstuvwxyz";
    int t = 0, index = 0;
    int seen[26] = {0}; // to skip duplicate letters
    for (int i = 0; key[i] != '\0'; i++) {
        if (key[i] >= 'a' && key[i] <= 'z') {
            if (seen[key[i]-'a'] == 0) {
                seen[key[i]-'a'] = 1;
                map[index].before = key[i];
                map[index].after = alpha[t++];
                index++;
            }    
        }
    }
    for (int i = 0; message[i] != '\0'; i++) {
        if (message[i] >= 'a' && message[i] <= 'z') {
            for (int j = 0; j < 26; j++) {
                if (map[j].before == message[i]) {
                    message[i] = map[j].after;
                    break;
                }
            }
        }
    }
    return message; 
}