#ifndef __DJB_HASH_H
#define __DJB_HASH_H

__UINT32_TYPE__
djb_hash(const char *str){
    int hash = 5381;
    while(*str){
        hash += (hash<<5) + (*str++);
    }
    return hash & 0x7FFFFFFF;
}

#endif // __DJB_HASH_H