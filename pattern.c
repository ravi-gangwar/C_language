#include<stdio.h>
 int main(){
         int n;
         scanf("%d", &n);
         for (int i = 1; i>=2*n-1; i++){
             if(i<=5){
            for (int j = i; j >=1; j++)
             {
                 printf("*");
             }}else
                 {
                 for (int j = 1; j <=n-1; j--)
                 {
                printf("*");
                }
                }
            printf("\n");
        }
       
    return 0;    
}
