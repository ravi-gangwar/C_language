#include <stdio.h>
#include <math.h>
int main(){
    int n, p=0,l, sum=0, num;
    
    scanf("%d", &n);
    num = n;
    while(n!=0){
        n = n/10;
        p+=1;
    }
    for(int i=1; i<=p; i++){
        l = num%10;
        num = num/10;
        sum = sum + pow(l, p);
    }
    printf("\n%d", sum);
}
