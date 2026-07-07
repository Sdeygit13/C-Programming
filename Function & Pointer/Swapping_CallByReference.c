

#include <stdio.h>

void swap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;

    printf("After Swapping:\n");
    printf("a = %d, b = %d", *x, *y);
}

int main()
{
    int a, b;

    printf("Enter a & b : ");
    scanf("%d %d",&a,&b);

    printf("Before Swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    swap(&a, &b);
    return 0;
}
