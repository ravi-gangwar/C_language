#include<stdio.h>
int main()
{
	int r, n=2, i=2, c=0;
	printf("Give me num: ");
	scanf("%d", &r);
  
	while(n<r){
   while(i<n){
    if(n%i==0){
			c=c+1;
		}
      i++;
      }
        i=2;
    if(c==0){
        printf("%d, ", n);
      }
    n++;
	}
}