#ifndef __FNV_HASH_H
#define __FNV_HASH_H

__UINT32_TYPE__
fnv_hash(const char *str,int len){
    const int fnv_num = 0x811C9DC5;
    int hash = 0;
    for(int i = 0;i < len;i++){
        hash *= fnv_num;
        hash ^= (*(str+i));
    }
    return hash & 0x7FFFFFFF;
}


#endif // __FNV_HASH_H