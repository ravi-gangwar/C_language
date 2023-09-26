#include <stdio.h>
int facto()
{
    int a, i,f;
    printf("Enter the number for Factorial\n");
    scanf("%d", &a);
        for (i=1; i<a; i++)
        {
            f=i*(i+1);

        }
    printf("%d", f);

    
  
}
int main()
{
    int facto();
return 0;
}
