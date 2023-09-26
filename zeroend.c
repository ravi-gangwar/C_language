#include<stdio.h>
int main()
{   int n;
    printf("enter size of array :");
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
int t=0;
    //optimised approach
    for(int i=0;i<n;i++)
    {
      if(a[i]==0)
      t=i;
      

    }
      for(int i=0;i<n;i++)
      printf("%d ", b[i]);

}