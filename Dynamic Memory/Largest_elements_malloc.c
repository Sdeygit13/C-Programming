
/*
Find the largest element using dynamic memory allocation.

Steps:

1. Pointer variable declare.

2. Take the numbers of elements

3. Create dynamic memory  ->  malloc()

4. Check the largest number

5. Print the result

6. Free te memory

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *a, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    printf("Largest = %d", max);

    free(a);

    return 0;
}








