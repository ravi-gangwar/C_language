#include<stdio.h>
int main()
{
int c;
float b= (float)9/5;


printf("Enter celsius to convert into fahrenheit.\n");
scanf("%d", &c);
printf("fahrenheit is:%.3fF", c*b+32);


return 0;


}
