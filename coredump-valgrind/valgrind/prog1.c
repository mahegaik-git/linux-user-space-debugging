#include <stdio.h>
#include <stdlib.h> //for malloc
#include <string.h>

#if 0
void using_uninitialzed_var()
{
    int i;
    if(i == 0)
        printf("Value of i is 0\n");
    else
        printf("Value of i is not 0\n");
}
#endif
#if 0
int *out_of_scope()
{
    int value = 4;
    return &value;
}
#endif
#if 0
void write_overflow()
{
#if 1               	
    int array[5];	
    for(int i =0; i<10; ++i)
        array[i] = i;           //overflow of array
#endif
#if 0
    char *pMem = NULL;
    pMem = malloc(5);
    if(!pMem)
        printf("\n Malloc Failed! \n");
    strcpy(pMem,"Copying longer string");
    free(pMem);
#endif

}
#endif
#if 0
void write_underflow()
{
    char *pMem = NULL;
    pMem = malloc(5);
    if(!pMem)
        printf("\n Malloc Failed! \n");
    pMem--;
    strcpy(pMem,"Hi");
    free(pMem);
}
#endif
#if 1
void double_free()
{
    char *pMem = NULL;
    pMem = (char*)malloc(5);
    if(!pMem)
        printf("\n Malloc Failed! \n");
    strcpy(pMem,"Hi");
    free(pMem);
    puts(pMem);
    free(pMem); 
}
#endif
void read_overflow()
{
    char array1[4];
    char array2[4];
    memset(array1,'A',4);
    memset(array2,'B',4);
    printf("array values %s \n",array1);
}
int main(int argc, char* argv[])
{
    //using_uninitialzed_var();
    //int *value_at_main = out_of_scope();
    //++value_at_main;
    //printf("\nreturned value is : %d \n ",*value_at_main);   //demo out of scope access
    //write_overflow();
    //write_underflow();
    //double_free();
    read_overflow();
    return 0;
}
