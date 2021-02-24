#include<stdio.h>

int main(){
    int i,j;
    int n =5;
    for(i=0;i<n;i++){
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        
        for(j=0;j<n-i;j++){
            printf("%d",j+1);
        }
        for (j = n-i-1; j > 0; j--)
        {
            printf("%d",j);
        }
        
        printf("\n");
    }
    return 0;

}