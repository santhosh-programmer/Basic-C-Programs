
// C PROGRAM TO FIND NUMBER OF COMBINATIONS ALLOWED FOR A STRING

#include<stdio.h>
#include<string.h>
int fact(int a)
{
    if (a==0 || a==1)
    return 1;
    else
    return a*fact(a-1);
}
int main()
{
    char arr[100];
    int count,final;
    printf("Enter string: ");
    scanf("%s",arr);
    int n=strlen(arr),ans=(fact(n));
    char ch[26]={'a','s','d','f','g','h','j','k','l','z','x','c','v','b','n',
    'm','q','w','e','r','t','y','u','i','o','p'};
    for (int i=0;i<26;i++)
    {   count=0;
        for(int j=0;j<n;j++)
        {   
            if (ch[i]==arr[j])
            count++;
        }
        ans=ans/fact(count);
    }
    printf("No of combinations: %d",ans);
    return 0;
}