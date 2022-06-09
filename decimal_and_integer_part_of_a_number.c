
// C PROGRAM TO FIND INTEGER AND DECIMAL PART OF A NUMBER

#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    printf("Enter number: ");
    scanf("%lf",&a);
    b=modf(a,&c);
    printf("Decimal part: %f\nInteger part: %f",b,c);
    return 0;
}