#include <stdio.h>

int foo2(int foo2_var);

int foo1(int value)
{
    int foo1_var = 0x55;	
    printf("\n In FOO1 : %x \n",value);	
    foo2(foo1_var);	
    return 0;
}
int foo2(int foo2_var)
{
    printf("In FOO2 : %x \n",foo2_var);	
    return 0;
}

int main(int argc,char *argv[])
{
    printf("\n In Main \n");
    foo1(0xDEAD);
    return 0;
}

