#include <stdio.h>

void func(int loopcount)
{
    do
    {
        printf("loopcount : %d\n",loopcount);
	--loopcount;
    }while(loopcount !=0);
}


int main(int argc, char* argv[])
{
    int i = 0;
    printf("Enter loopcount : ");
    scanf("%d",&i);
    if(i>0)
        func(i);
    return 0;
}
