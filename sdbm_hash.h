#ifndef __SDBM_HASH_H
#define __SDBM_HASH_H

__UINT32_TYPE__
sdbm_hash(const char *str){
    int hash = 0;
    while (*str){
        hash = (*str++) + (hash<<6) + (hash<<16) - hash;
    }
    return hash & 0x7FFFFFFF;
}

#endif // __SDBM_HASH_H