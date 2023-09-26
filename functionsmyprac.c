#include <stdio.h>
//without arguments and without return value.
void multi()
{
    int a,b;
    float c;
   
    
printf("Enter the two number to multiple\n:");
scanf("%d\n%d", &a, &b);
c=a/b;
printf("answer is: %.2f", c);

}
int main()
{
    multi();
return 0;
}
