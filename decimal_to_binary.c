
// C PROGRAM TO CONVERT DECIMAL TO BINARY NUMBER

#include<stdio.h>
int main()
{
    int a,b,c=0,d=1;
    printf("Enter decimal number: ");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%2;
        c+=b*d;
        d*=10;
        a=a/2;
    }
    printf("Binary number: %d",c);
    return 0;
}