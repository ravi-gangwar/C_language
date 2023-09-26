#include <stdio.h>
int main()
{
int num, one=0;
printf("Enter number which you want table\n");
scanf("%d", &num);
printf("your multification is:\n");
do
{
one= one+1;
printf("%d\n", num*one);


}while(one<10);




return 0;
}