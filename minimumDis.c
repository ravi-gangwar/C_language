#include <stdio.h>
int main(){
    int F, S,f, s, d;
    int arr[] = {1,2,3,4,5,6,7};
    scanf("%d%d",&F, &S);
    for (int i = 0; i<7; i++){
        if(arr[i]==F)
        f=i;
        if(arr[i]==S){
            s=i;
        }
    
    }
    d = s - f;
    printf("Distance is %d", d);
}