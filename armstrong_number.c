
// C PROGRAM TO CHECK IF A NUMBER IS ARMSTRONG NUMBER

#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,b=0,c,d,e=0,sum=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    c=d=a;
    while(c>0)
    {
        c/=10;
        b++;
    }
    while(d!=0)
    {
        e=d%10;
        sum+=pow(e,b);
        d=d/10;    
    }
    if (a==sum)
    printf("It is a armstrong number");
    else
    printf("It is not a armstrong number");
    return 0;
}