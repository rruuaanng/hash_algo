#ifndef __BKDR_HASH_H
#define __BKDR_HASH_H

__UINT32_TYPE__
bkdr_hash(const char *str){
    const int seed = 131;
    int hash = 0;
    while(*str){
        hash = hash * seed + (*str++);
    }
    return hash & 0x7FFFFFFF;
}

#endif // __BKDR_HASH_H