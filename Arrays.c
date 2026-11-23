#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10;
    int *ptr=&x;
    printf("value of x:%d\n",x);
    printf("address of x:%p\n",(void*)ptr);
    printf("value using pointer:%d\n",*ptr);
    return 0;
    }

    int x=10;
    int y=20;
    update_value (&x);
    update_value (&y);
    printf("%d\n",x);
    printf("%d\n",y);
