#ifndef __ELF_HASH_H
#define __ELF_HASH_H

__UINT32_TYPE__
elf_hash(const char *str){
    int hash = 0;
    int x = 0;
    while (*str){
        hash = (hash<<4) + (*str++);
        if ((x = hash & 0xF0000000L) != 0){
            hash ^= (x >> 24);
            hash &= ~x;
        }
    }
    return hash & 0x7FFFFFFF;
}

#endif // __ELF_HASH_H