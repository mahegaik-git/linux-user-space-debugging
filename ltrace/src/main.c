#include <stdio.h>
#include "math.h"

int value1 = 3;
int value2 = 2;

int main()
{
    printf("%d + %d = %d\n",value1,value2,add(value1,value2));
    printf("%d - %d = %d\n",value1,value2,sub(value1,value2));
    return 0;
}
