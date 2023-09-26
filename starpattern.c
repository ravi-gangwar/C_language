#include <stdio.h>
void main(){
    for (int i = 1; i<=3; i++)
    {
        for (int j = 1; j<=5; j++)
        {
            if(j>=4-i && j<=i+2)
            {
                printf("*"); 
        
            }      
            else
                printf(" ");
        }
    printf("\n");
    }
}