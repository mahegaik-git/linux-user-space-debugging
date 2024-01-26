#include <stdio.h>
#include <stdlib.h>   //needed to get away with warning on atoi


int main(int argc, char *argv[])
{
    int ValuePassed = -1;
    int i = 32767;
    int array[4] = {1,2,3,4};
    float fval = 1.0;
    char cval = 0x5a;


    if(argc ==2) //this means we have passed additional value
    {
        ValuePassed = atoi(argv[1]);
    }
    printf("ValuePassed : %d\n",ValuePassed);
    return 0;
}
