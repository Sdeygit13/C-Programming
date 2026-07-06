//Write a program in C to multiply two 2D matrices and display the resultant matrix.

#include<stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3];

    //Values input
    printf("Enter First Matrix\n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d",&a[i][j]);
        }
    }        
    printf("Enter Second Matrix\n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d",&b[i][j]);        
        }
    } 

    //Calculation Process
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            c[i][j] = 0;
            for(int k=0;k<3;k++) {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }    
    }    
       
    //Result
    printf("\n...The Result is...\n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }  
    
    return 0;
}
