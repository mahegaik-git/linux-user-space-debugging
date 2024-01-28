#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    int i = -i;
    while(i<60)
    {
        printf("%d",i);
	sleep(1);
	++i;
    }
    return 0;
}
