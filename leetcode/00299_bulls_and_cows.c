char* getHint(char* secret, char* guess) {
    int hash1[10] = {0};
    int hash2[10] = {0};
    int x = 0, y = 0;
    for (int i = 0; guess[i] != '\0'; i++) {
        if (secret[i] == guess[i]) {
            x++;
        }
        else {
            hash1[secret[i]-'0']++;
            hash2[guess[i]-'0']++;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (hash1[i] < hash2[i]) {
            y += hash1[i];
        }
        else {
            y += hash2[i];
        }
    }
    char* result = (char*)malloc(10*sizeof(char));
    sprintf(result,"%dA%dB",x,y);
    return result;
}