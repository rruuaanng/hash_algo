#ifndef __JS_HASH_H
#define __JS_HASH_H

__UINT32_TYPE__
js_hash(const char *str){
    int hash = 1315423911;
    while(*str){
        hash ^= ((hash<<5) + (*str++) + (hash>>2));
    }
    return (hash & 0x7FFFFFFF);
}

#endif // __JS_HASH_H
