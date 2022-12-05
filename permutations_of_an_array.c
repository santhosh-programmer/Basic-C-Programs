#include<stdio.h>
void find(int ans[],int m,int a[],int map[],int n)
{
    if(m==n)
    {
        for(int i=0;i<n;i++)
        printf("%d ",ans[i]);
        printf("\n");
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(!map[i])
            {
                ans[m]=a[i];
                map[i]=1;
                find(ans,m+1,a,map,n);
                map[i]=0;
                ans[m]=0;
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n],ans[n],map[n];
    for(int i=0;i<n;i++)
    {
        a[i]=i+1;
        map[i]=0;
    }
    find(ans,0,a,map,n);
}
