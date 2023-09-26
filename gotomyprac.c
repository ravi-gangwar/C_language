#include <stdio.h>

int main()
{
label:
for ( int i = 0; i < 9; i++)
{
    
    printf("%d", i);
    if ((i==7))
    {
    goto label;
    }
    
        

    

}


  return 0;
}
