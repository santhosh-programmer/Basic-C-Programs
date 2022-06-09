
// C PROGRAM FOR VARIABLE LENGTH ARGUMENT-EXAMPLE

#include<stdio.h>
#include<stdarg.h>
int ave(int n,...);
int main()
{
    int a=10,b=1,c=3;
    printf("Average: %d",ave(a,b,c));
    return 0;
}
int ave(int n,...)
{
    va_list x;
    int ave=0;
    va_start(x,n);
    for (int i=0;i<n;i++)
    {
        ave=ave+va_arg(x,int);
    }
    return ave;
    va_end(x);
}
