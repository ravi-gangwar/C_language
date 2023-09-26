#include <stdio.h>
int facto(int a)
{
    if (a==1 || a==0){
        return (1);
    }
    else
        return (a*facto(a-1));
    
}
int main(){
    int a,s;

    printf("Enter a number: ");
    scanf("%d", &a);
    s=facto(a);
    printf("%d", s);



}