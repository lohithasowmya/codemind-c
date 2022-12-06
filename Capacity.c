#include<stdio.h>
void capacity(int s,int t,int b)
{
    int c;
    c=s*t*b;
    printf("%dkb",c);  
}
int main()
{
    int s,t,b;
    scanf("%d%d%d",&s,&t,&b);
    capacity(s,t,b);
}