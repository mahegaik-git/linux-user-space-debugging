#include <stdio.h>
#include <stdlib.h> //malloc
#include <string.h> //memset

const size_t BLK_1MB = 1024 * 1024;
//Accessing uninitialized memory
void uninit_mem()
{
    int array[5];
    for(int i =0; i<5;++i)
        array[i] = 0x55;
    for(int i =0; i<10;++i)
        printf("%d\n",array[i]);
}
//Memory leak
void mem_leak()
{
    char *ptr;
    ptr  = malloc(BLK_1MB);
    memset(ptr,0,BLK_1MB);
}
int main()
{
    printf("\nMEMORY BEFORE LEAK\n");    
    system("free | grep \"^Mem:\"");	
    //uninit_mem();
    for(int i = 0; i < 1024; ++i)
        mem_leak();
    printf("MEMORY POST LEAK\n");    
    system("free | grep \"^Mem:\"");	
    return 0;    
}
