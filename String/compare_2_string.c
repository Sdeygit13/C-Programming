

#include<stdio.h>

int main() {

    int flag = 0;
    char str1[20], str2[20];

    printf("Enter the 1st String: ");
    gets(str1);

    printf("Enter the 2nd String: ");
    gets(str2);

    for(int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++ ) {

        if(str1[i] != str2[i]) {
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        printf("Same");
    }
    else {
        printf("Not Same");
    }
    return 0;
}
