#include<stdio.h>

int main(){
    int i,j;
    int n =5;
    for(i=0;i<n;i++){
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        
        for(j=n-i;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;

}