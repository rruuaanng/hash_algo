#ifndef __AP_HASH_H
#define __AP_HASH_H

__UINT32_TYPE__
ap_hash(const char *str){
    __UINT32_TYPE__ hash = 0;
    for(int i = 0;*str;i++){
        if((i & 1) == 0){
            hash ^= ((hash<<7) ^ (*str++) ^ (hash>>3));
        }else{
            hash ^= (~((hash<<11) ^ (*str++) ^ (hash>>5)));
        }
    }
    return hash & 0x7FFFFFFF;
}

#endif // __AP_HASH_H