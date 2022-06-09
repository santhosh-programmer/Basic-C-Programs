
// C PROGRAM TO IMPLEMENT VARIABLE LENGTH ARGUMENT-EXAMPLE

#include<stdio.h>
#include<stdarg.h>
int add(int b,...);
int main()
{
    int a=add(2,2,3);
    printf("Sum: %d",a);
    return 0;
}
int add(int b,...);
int add(int b,...)
{
    int d,sum=0;
    va_list c;
    va_start(c,b);
    for (d=0;d<b;d++)
    {
        sum+=va_arg(c,int);
    }
    va_end(c);
    return sum/b;
}
