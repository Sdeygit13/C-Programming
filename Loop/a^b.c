
#include <stdio.h>
int main()
{
    int a, b, power = 1;

    printf("Enter base number: ");
    scanf("%d", &a);

    printf("Enter power: ");
    scanf("%d", &b);

    for(int i = 1; i <= b; i++)
    {
        power = power * a;
    }

    printf("The result is %d",power);

    return 0;
}
