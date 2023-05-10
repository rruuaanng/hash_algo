#ifndef __RS_HASH_H
#define __RS_HASH_H

__UINT32_TYPE__
rs_hash(const char *str){
    const int k = 378551;
    int t = 63689;
    int hash = 0;
    while (*str){
        hash = hash * t + (*str++);
        t *= k;
    }
    return hash & 0x7FFFFFFF;
}

#endif // __RS_HASH_H