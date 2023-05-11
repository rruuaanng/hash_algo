#ifndef __PJW_HASH_H
#define __PJW_HASH_H

__UINT32_TYPE__ 
pjw_hash(const char *str){
    __UINT32_TYPE__ bits = (unsigned int)(sizeof(unsigned int) * 8);
    __UINT32_TYPE__ tbit = (unsigned int)((bits  * 3) / 4);
    __UINT32_TYPE__ obit = (unsigned int)(bits / 8);
    __UINT32_TYPE__ hbit = (unsigned int)(0xFFFFFFFF) << (bits - obit);
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
