#include<stdio.h>
int main()
{
    int n,i,count=1;
    scanf("%d",&n);
    for(i=1;i<n/2;i++);
    {
        if(n%i==0)
        {
            count++;
        }
    }
if(count==2)
{
    printf("Not Prime");
}
else
{
    printf("Prime");
}
}