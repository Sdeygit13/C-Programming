#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];

    printf("Enter a String: ");
    scanf("%s",str);

    printf("The Reversed string: ");

    for(int i = strlen(str)-1; i>=0; i--) {
        printf("%c",str[i]);
    }
    return 0;
}
