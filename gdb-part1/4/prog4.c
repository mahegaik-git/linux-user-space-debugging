#include <stdio.h>
#include <stdlib.h> //for malloc
#include <string.h> //for memcpy

const char *gpMyString1 = "Crash Demo & Debug";

int main(int argc, char *argv[])
{
    char *pMyString2 = NULL;
    //pMyString2 = malloc(100);
    memcpy(pMyString2,"Debug crash",sizeof("Debug crash")+1);
    printf("\n %s \n",gpMyString1);
    printf("\n %s \n",pMyString2);
    return 0;
}
