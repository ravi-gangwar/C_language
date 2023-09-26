#include <stdio.h>
void swipe(int *a, int *b)
{
    int num;
  *a=num;
  *a=*b;
  *b=num;
}
void main()
{
int a=10, b=20; 
printf ("value of a is: %d \nand value of b is: %d", a,b);
swipe(&a, &b);
printf ("\nvalue of a is: %d \nand value of b is: %d", a, b);
}