
#include<stdio.h>
int powr(int a, int b) {

    if(b==0){
        return 1;
    }
    return a * powr(a, b-1);
}

int main() {
    int a,b;

    printf("Enter a :");
    scanf("%d",&a);

    printf("Enter b :");
    scanf("%d",&b);

    printf("%d^%d = %d",a,b,powr(a,b));
    return 0;
}
