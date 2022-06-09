
// C PROGRAM TO FIND FACTORIAL OF A NUMBER

#include <stdio.h>
int main()
{   
    int a,i,b=1;
    printf("Enter number: ");
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        b=b*i;
    }
    printf("Factorial: %d",b);
    return 0;
}