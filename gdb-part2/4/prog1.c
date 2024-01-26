#include <stdio.h>
#include <unistd.h> //for sleep

int main(int argc, char* argv[])
{
    int i = 60;
    while(i)
    {
        printf("value of i is : %d\n",i);
	sleep(1);
        --i;
    }
    return 0;
}

