#include <stdio.h>

int func2(int ValueFromFunc1)
{
    int returnValue = ValueFromFunc1-1;
    printf("\nfunc2->returnValue : %x\n",returnValue);
    return returnValue;
}

int func1(int ValueFromMain)
{
    int returnValue;
    printf("\nfunc1->ValueFromMain : %x\n",ValueFromMain);
    returnValue = func2(ValueFromMain) - 1 ;
    printf("\nfunc1->returnValue : %x\n",returnValue);
    return returnValue;
}

int main(int argc, char *argv[])
{
    int mainVar = -1;
    register int regVar;
    int temp;
    mainVar = 10;
    printf("Enter value for register variable : ");
    scanf("%d",&temp);
    regVar = temp - 1;
    printf("regVar nos is : %d ",regVar);
    int returnValue = func1(mainVar);
    printf("\nreturnValue : %x\n",returnValue);
    return 0;
}
