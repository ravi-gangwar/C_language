#include <stdio.h>
int main()
{
int num;
printf("Given the answer to the following question.\n ");
printf("Q-Wright the name of prime minister of INDIA?\n");
printf("1)- gautam\n");
printf("2)- harh\n");
printf("3)- harshit\n");
printf("4)- Narendra Modi ji\n");

scanf("%d", &num);
switch (num)
{
case 4:
printf("Your Answer is right.");
    break;

default:
printf("Your answer is wrong.");
    break;
}
printf("BYE ENDED")

return 0;
}