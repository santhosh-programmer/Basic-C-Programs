
// C PROGRAM TO FIND A NUMBER IS PALINDROME OR NOT 

#include <stdio.h>
int main()
{
int a,b,rev=0,rem;
printf("Enter the number: ");
scanf("%d",&a);
b=a;
while(a>0)
{
rem=a%10;
rev=(rev*10)+rem;
a=a/10;
}
printf("Reverse number of %d is %d",b, rev);
if(b==rev)
printf("\n%d is palindrome\n",b);
else
printf("\n%d is not a palindrome\n",b);
return 0;
}