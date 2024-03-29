#include <stdio.h>

int main()
{
    FILE *pFile = NULL;
    fopen("test.txt","rw");
#if 0    
    if(pFile = fopen("test.txt","rw"))
    {
        printf("File open success\n");
	fclose(pFile);
    }
    else
    {
        printf("File open Error\n");
    }
#endif
    return 0;
}
