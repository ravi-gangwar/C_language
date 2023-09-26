#include <stdio.h>
int main(){
    int a=1;
    int* ptra=&a;
    printf("%d", ptra);
    printf("\n%d", &ptra);
    printf("\n%d", *ptra);
    int arr[4];
    printf("\nenter:"); 
    scanf("%d", &arr[0]);
    printf("\nenter:");
    scanf("%d", &arr[1]);
    printf("\nenter:");
    scanf("%d", &arr[2]);
    for (int i = 0; i<3; i++)
{
    printf("%d\n", arr[i]);
}
    int* ptrarr= arr;
    printf(":%d", *ptrarr);




}