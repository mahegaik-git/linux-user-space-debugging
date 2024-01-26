#include <stdio.h>

//#define pi 3.14
const float pi=3.14;
int main(int argc, char* argv[])
{
    float fvalue = 0.0;
    for(int i = 0;i<10; ++i)
    {
        fvalue = pi * i;
	printf("fvalue : %f \n",fvalue);
    }
    return 0;
}
