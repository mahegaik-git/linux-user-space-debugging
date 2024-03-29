#include <stdio.h>

//const unsigned int MAX_COUNT = 100;
const unsigned int MAX_COUNT = 4000;
//const unsigned int MAX_COUNT = 100;

struct data
{
    int sValue1;
    int sValue2;
};

int main()
{
    struct data mydata;
    FILE *pPtr = NULL;
    pPtr = fopen("test.txt","w");
    if(!pPtr)
    {
        printf("Unable to open or create file\n");
    }
    else
    {
        for(unsigned int i=0; i<MAX_COUNT; ++i)
	{
            mydata.sValue1 = i;
	    mydata.sValue2 = i+1;
	    fwrite(&mydata,sizeof(struct data),1, pPtr);
	}
	fclose(pPtr);
    }
    return 0;
}
