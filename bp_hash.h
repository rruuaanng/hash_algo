#ifndef __BP_HASH_H
#define __BP_HASH_H

__UINT32_TYPE__
bp_hash(const char *str,int len){
    int hash = len;
    for(int i = 0;i < len;i++){
        hash = (hash<<7) ^ (*(str+i));
    }
    return hash & 0x7FFFFFFF;
}

#endif // __BP_HASH_H