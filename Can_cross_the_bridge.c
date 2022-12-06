#include<stdio.h>
int bridge(int x,int y,int z)
{
    int m;
    m=(z-y)/x;
    return m;
}
int main()
{
    int x,y,z,m;
    scanf("%d%d%d",&x,&y,&z);
    int b=bridge(x,y,z);
    printf("%d",b);
}
