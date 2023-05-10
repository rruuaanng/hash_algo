#ifndef __DEK_HASH_H
#define __DEK_HASH_H
#include <stdio.h>

__UINT32_TYPE__
dek_hash(const char *str,int len){
    int hash = len;
    for(int i = 0;i < len;i++){
        hash = (hash<<5) ^ (hash>>27) ^ (*(str+i));
    }
    return hash & 0x7FFFFFFF;
}

#endif // __DEK_HASH_H