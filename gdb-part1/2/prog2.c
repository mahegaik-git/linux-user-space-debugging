#include <stdio.h>

void foo1()
{
    unsigned int temp=1;	
    for(int i = 0; i<=2;++i)
    {
	++temp;    
        switch (i)
	{
	    case 0:
                printf("%d-> temp : %d \n", i,temp);
		++temp;	
	    break;
	    case 1:
                printf("%d-> temp : %d \n", i,temp);
		++temp;	
	    break;
	    default:
                printf("%d-> temp : %d \n", i,temp);
		++temp;	
	    break;
	}
    }
}

int main()
{
    int i = 0;
    printf("\n calling foo()\n");    
    if(i == 0)
        foo1();
    else
	printf("\n Didnt call foo()\n");    
    return 0;
}
