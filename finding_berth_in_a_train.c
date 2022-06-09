
// C PROGRAM TO FIND BERTH IN A TRAIN

#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    printf("Enter seat number: ")
    scanf("%d",&a);
    if((a-4)%8==0 || (a-1)%8==0)
    printf("Lower Berth");
    else if ((a-2)%8==0 || (a-1)%4==0)
    printf("Middle Berth");
    else if ((a-3)%8==0 || (a-2)%4==0)
    printf("Upper Berth");
    else if (a%8==0)
    printf("Side Upper Berth");
    else
    printf("Side Lower Berth");
    return 0;
}