#include<stdio.h>
int main()
{
    int i,n,m=0;
    float s=0.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            m++;
        }
    }
    if(m==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}