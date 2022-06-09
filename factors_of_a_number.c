
// C PROGRAM TO FIND FACTORS OF A NUMBER

#include<stdio.h>
int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    printf("Factors: ");
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        printf("%d ",i);
    }
    return 0;
}