#ifndef __PJW_HASH_H
#define __PJW_HASH_H

__UINT32_TYPE__ 
pjw_hash(const char *str){
    __UINT32_TYPE__ bits = (__UINT32_TYPE__)(sizeof(__UINT32_TYPE__) * 8);
    __UINT32_TYPE__ tbit = (__UINT32_TYPE__)((bits  * 3) / 4);
    __UINT32_TYPE__ obit = (__UINT32_TYPE__)(bits / 8);
    __UINT32_TYPE__ hbit = (__UINT32_TYPE__)(0xFFFFFFFF) << (bits - obit);
    int hash = 0;
    int n = 0;
    while(*str){
        hash = (hash<<obit) + (*str++);
        if ((n = hash & hbit) != 0){
            hash = ((hash ^ (n>>tbit)) & (~hbit));
        }
    }
    return hash & 0x7FFFFFFF;
}


#endif // __PJW_HASH_H
