#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr;

    ptr = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %u\n", &a);
    printf("Value stored in ptr = %u\n", ptr);
    printf("Value pointed by ptr = %d\n", *ptr); 

    return 0;
}


