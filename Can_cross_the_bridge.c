#include<stdio.h>
void bridge(int x,int y,int z)
{
    int m;
    m=(z-y)/x;
    printf("%d",m);
}
int main()
{
    int x,y,z,m;
    scanf("%d%d%d",&x,&y,&z);
    bridge(x,y,z);
}
