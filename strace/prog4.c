#include <stdio.h>
#include <unistd.h>

int main()
{
    int i = 0;
    printf("Entering while loop\n");
    while(1)
    {
        ++i;
	printf("i is : %d \n",i);
	sleep(2);
    }
}
