
#include <cstdlib>
#define SUCCESS 1
#define UNSUCESS 0
#define HASHSIZZE 12
#define NULLKEY -32768

struct HashTable{
    int *elem;
    int count;
};
int m = 0;

int InitHashTable(HashTable *H){
    int i;
    m = HASHSIZZE;
    H->count = m;
    H->elem = (int*)malloc(m * sizeof(int));
    for(i = 0; i < m; i++){
        H->elem[i] = NULLKEY;
    }
    return 1;
}

int Hash(int key){
    return key % m;
}

void InsertHash(HashTable *H, int key){
    int addr = Hash(key);
    while (H->elem[addr] != NULLKEY) {
        addr = (addr + 1) % m;
    }
    H->elem[addr] = key;
}

int searchHash(HashTable H, int key, int *addr){
    *addr = Hash(key);
    while(H.elem[*addr] != key){
        *addr = (*addr + 1) % m;
        if(H.elem[*addr] == NULLKEY || *addr == Hash(key)){
            return UNSUCESS;
        }
    }
    return SUCCESS;
}