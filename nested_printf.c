
// C PROGRAM FOR NESTED PRINTF FUNCTION

#include<stdio.h>
int main ()
{
    int i=10,j=2;
    printf("%d",printf("%d",printf("%d",printf("%d%d",i,j))));
    // INNER MOST PRINTF PRINTS THE OUTPUT AND NEXT PRINTF PRINTS
    // THE SIZE OF THE OUTPUT AND NEXT PRINTF PRINTS THE SIZE OF
    // SECOND OUTPUT AND IT GOES ON...  
    return 0;
}
