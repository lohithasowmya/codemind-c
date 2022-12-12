#include<stdio.h>
int avrg(int x,int y,int z)
{
    int a;
    a=(3*x)-(y+z);
    return a;
}
   int main()
   {
    int x,y,z,a;
    scanf("%d %d %d",&x,&y,&z);
    int b=avrg(x,y,z);
    printf("%d",b);
}