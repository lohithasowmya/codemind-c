#include<stdio.h>
int capacity(int s,int t,int b)
{
    int c;
    c=s*t*b;
    return c;
}
int main()
{
    int s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    int x=capacity(s,t,b);
    printf("%dkb",x);
}