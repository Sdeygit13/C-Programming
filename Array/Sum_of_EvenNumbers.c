
#include <stdio.h>
int main()
{
    int a[5], i, sum = 0;

    printf("Enter Array Elements: ");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++)
    {
        if(a[i] % 2 == 0)
        {
            sum = sum + a[i];
        }
    }
    printf("Sum of Even Array Elements = %d", sum);

    return 0;
}
