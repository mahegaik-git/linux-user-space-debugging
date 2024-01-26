#include <stdio.h>

int main(int argc, char* argv[])
{
    int tempVar = -1;
    printf("Enter a number between 1 to 5 : "); 
    scanf("%d",&tempVar);
    switch (tempVar)
    {
        case 1:
		printf("I am in case 1 \n");
	break;
        case 2:
		printf("I am in case 2 \n");
	break;
        case 3:
		printf("I am in case 3 \n");
	break;
        case 4:
		printf("I am in case 4 \n");
	break;
        case 5:
		printf("I am in case 5 \n");
	break;
        default:
		printf("Err: Entered number %d not in said range \n",tempVar);
	break;
    }
    printf("EXITING DEMO PROGRAM \n");
    return 0;
}
