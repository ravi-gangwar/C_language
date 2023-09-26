#include<stdio.h>

int revv( int *a,int x,int y)
{  if(x<y){
    int temp=a[x];
        a[x]=a[y];
        a[y]=temp; 
        revv(a,x+1,y-1);}
        else
        {
            return 0;
        }
}
int main()
{
     int a[5];
    //int b[5];
     for(int i=0;i<5;i++)
    scanf("%d", &a[i]);
    //rev logic
    // int p=0;
    // for(int i=4;i>-1;i--)
    // {
    //     b[p]=a[i];
    //     p++;
       
    // }
    //by using o(n)
    // int x=0,y=4;
    // while(x<y)
    // {
    //     int temp=a[x];
    //     a[x]=a[y];
    //     a[y]=temp;
    //     x++;y--;
    // }
   int o= revv(a,0,4);
    for(int i=0;i<5;i++){
     printf("%d ",a[i]);
    }
    return 0;
}