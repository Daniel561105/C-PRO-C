//hash table from chatgpt , i've got no idea what the heck is talking about 0212

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10  // 設定哈希表的大小

// 定義哈希表的結構
typedef struct {
    char *key;
    int value;
} HashTableEntry;

HashTableEntry *hashTable[TABLE_SIZE];  // 哈希表數組

// 哈希函數：根據字符串的每個字符計算哈希值
int hash(char *key) {
    int hashValue = 0;
    for (int i = 0; key[i] != '\0'; i++) {
        hashValue += key[i];
    }
    return hashValue % TABLE_SIZE;
}

// 插入函數：將鍵值對插入哈希表
void insert(char *key, int value) {
    int index = hash(key);  // 計算鍵的哈希值，找到對應的索引位置

    // 當位置上已經有資料時，更新值
    if (hashTable[index] != NULL && strcmp(hashTable[index]->key, key) == 0) {
        hashTable[index]->value = value;
    } else {
        // 否則創建新條目並插入
        HashTableEntry *newEntry = (HashTableEntry *)malloc(sizeof(HashTableEntry));
        newEntry->key = key;
        newEntry->value = value;
        hashTable[index] = newEntry;
    }
}

// 查詢函數：根據鍵查找對應的值
int search(char *key) {
    int index = hash(key);

    if (hashTable[index] != NULL && strcmp(hashTable[index]->key, key) == 0) {
        return hashTable[index]->value;  // 返回對應的值
    } else {
        return -1;  // 如果沒有找到，返回 -1
    }
}

// 測試程式
int main() {
    // 初始化哈希表（將每個元素設為 NULL）
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = NULL;
    }

    // 插入一些鍵值對
    insert("apple", 10);
    insert("banana", 20);
    insert("orange", 30);

    // 查詢並打印結果
    printf("apple: %d\n", search("apple"));   // 輸出 10
    printf("banana: %d\n", search("banana")); // 輸出 20
    printf("orange: %d\n", search("orange")); // 輸出 30
    printf("grape: %d\n", search("grape"));   // 輸出 -1 (因為沒有插入)

    return 0;
}
