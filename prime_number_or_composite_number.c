
// C PROGRAM TO FIND IF A NUMBER IS PRIME OR COMPOSITE

#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter number: ");
    scanf("%d",&a);
    for (i=2;i<a;i++)
    {
        if(a%i==0){
        printf("composite");
        break;}
    }
    if(i==a)
    printf("prime");
    return 0;
}