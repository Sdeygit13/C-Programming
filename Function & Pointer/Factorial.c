#include <stdio.h>

int factorial(int x) {
    int fact = 1;
    for(int i=1;i<=x;i++) {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("The factorial is = %d",fact);
    return 0;
}
