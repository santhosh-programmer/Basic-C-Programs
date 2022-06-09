
// C PROGRAM TO IMPLEMENT SCANF INSIDE PRINTF

#include <stdio.h>
int main()
{
	char a[100], b[100], c[100];
	// scanf() with one input
	printf("First scanf() returns : %d\n",scanf("%s", a));
	// scanf() with two inputs
	printf("Second scanf() returns : %d\n",scanf("%s%s", a, b));
	// scanf() with three inputs
	printf("Third scanf() returns : %d",scanf("%s%s%s", a, b, c));
	return 0;
}
