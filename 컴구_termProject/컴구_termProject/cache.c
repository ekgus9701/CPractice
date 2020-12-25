/*
 * cache.c
 *
 * 20493-02 Computer Architecture
 * Term Project on Implentation of Cache Mechanism
 *
 * Skeleton Code Prepared by Prof. HyungJune Lee
 * Nov 13, 2017
 *
 */


#include <stdio.h>
#include <string.h>
#include "cache_impl.h"

extern int num_cache_hits;
extern int num_cache_misses;

extern int num_bytes;
extern int num_access_cycles;

extern int global_timestamp;

cache_entry_t cache_array[CACHE_SET_SIZE][DEFAULT_CACHE_ASSOC];
int memory_array[DEFAULT_MEMORY_SIZE_WORD];


/* DO NOT CHANGE THE FOLLOWING FUNCTION */
void init_memory_content() {
    unsigned char sample_upward[16] = {0x001, 0x012, 0x023, 0x034, 0x045, 0x056, 0x067, 0x078, 0x089, 0x09a, 0x0ab, 0x0bc, 0x0cd, 0x0de, 0x0ef};
    unsigned char sample_downward[16] = {0x0fe, 0x0ed, 0x0dc, 0x0cb, 0x0ba, 0x0a9, 0x098, 0x087, 0x076, 0x065, 0x054, 0x043, 0x032, 0x021, 0x010};
    int index, i=0, j=1, gap = 1;

    for (index=0; index < DEFAULT_MEMORY_SIZE_WORD; index++) {
        memory_array[index] = (sample_upward[i] << 24) | (sample_upward[j] << 16) | (sample_downward[i] << 8) | (sample_downward[j]);
        if (++i >= 16)
            i = 0;
        if (++j >= 16)
            j = 0;

        if (i == 0 && j == i+gap)
            j = i + (++gap);

        printf("mem[%d] = %#x\n", index, memory_array[index]);
    }
}

/* DO NOT CHANGE THE FOLLOWING FUNCTION */
void init_cache_content() {
    int i, j;

    for (i=0; i<CACHE_SET_SIZE; i++) {
        for (j=0; j < DEFAULT_CACHE_ASSOC; j++) {
            cache_entry_t *pEntry = &cache_array[i][j];
            pEntry->valid = 0;
            pEntry->tag = -1;
            pEntry->timestamp = 0;
        }
    }
}

/* DO NOT CHANGE THE FOLLOWING FUNCTION */
/* This function is a utility function to print all the cache entries. It will be useful for your debugging */
void print_cache_entries() {
    int i, j, k;

    for (i=0; i<CACHE_SET_SIZE; i++) {
        printf("[Set %d] ", i);
        for (j=0; j <DEFAULT_CACHE_ASSOC; j++) {
            cache_entry_t *pEntry = &cache_array[i][j];
            printf("V: %d Tag: %#x Time: %d Data: ", pEntry->valid, pEntry->tag, pEntry->timestamp);
            for (k=0; k<DEFAULT_CACHE_BLOCK_SIZE_BYTE; k++) {
                printf("%#x(%d) ", pEntry->data[k], k);
            }
            printf("\t");
        }
        printf("\n");
    }
}

int check_cache_data_hit(int addr, char type) {
    int block_address= addr/DEFAULT_CACHE_BLOCK_SIZE_BYTE;
    int c_tag=0;
    int c_set=0;
    int binary[5] = { 0, };

    int position = 0;
    while (1)
    {
        binary[position] = block_address% 2;    // 2로 나누었을 때 나머지를 배열에 저장
        block_address = block_address / 2;             // 2로 나눈 몫을 저장

        position++;    // 자릿수 변경

        if (block_address == 0)    // 몫이 0이 되면 반복을 끝냄
            break;
    }

    if(DEFAULT_CACHE_ASSOC==1){
        c_tag=binary[0]*4+binary[1]*2+binary[2]*1;
        c_set=binary[3]*2+binary[4]*1;

    }

    if(DEFAULT_CACHE_ASSOC==2){
        c_tag=binary[0]*8+binary[1]*4+binary[2]*2+binary[3]*1;
        c_set=binary[4]*1;
    }

    if(DEFAULT_CACHE_ASSOC==4){
        c_tag=binary[0]*16+binary[1]*8+binary[2]*4+binary[3]*2+binary[4]*1;

    }
    num_access_cycles+=1;

    for (int i=0; i<CACHE_SET_SIZE; i++) {
            for (int j=0; j <DEFAULT_CACHE_ASSOC; j++) {
                cache_entry_t *pEntry = &cache_array[i][j];
                for (int k=0; k<DEFAULT_CACHE_BLOCK_SIZE_BYTE; k++) {
                    if(pEntry->valid==1&&pEntry->tag==c_tag){ //hit

                        return pEntry->data[k];
                    }
                    else
                        return -1;
                }
            }
    }


}

int find_entry_index_in_set(int cache_index) {
    int entry_index;

    /* Check if there exists any empty cache space by checking 'valid' */


    /* Otherwise, search over all entries to find the least recently used entry by checking 'timestamp' */



    return entry_index;
}

int access_memory(int addr, char type) {

    /* Fetch the data from the main memory and copy them to the cache */
    /* void *addr: addr is byte address, whereas your main memory address is word address due to 'int memory_array[]' */

    /* You need to invoke find_entry_index_in_set() for copying to the cache */




    /* Return the accessed data with a suitable type */





    return 0;
}
