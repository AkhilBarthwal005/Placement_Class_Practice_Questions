#include<stdio.h>

int main(){
    int i,j;
    int n =5;
    for(i=0;i<n;i++){
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        
        for(j=0;j<2*n-2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}