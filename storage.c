// C code to illustrate Internal Linkage
#include <stdio.h>
#include "rough.c" // note that animal is included.

int main()
{
	call_me();
	printf("\n having fun washing!");
	animals = 10;
	printf("%d\n", animals);
	return 0;
}
