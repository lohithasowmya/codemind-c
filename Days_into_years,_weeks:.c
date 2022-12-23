#include<stdio.h>
int years(int a)
{
    int y;
    y=(a/365);
    return y;
}
int weeks(int a)
{
    int w;
    w=(a%365)/7;
    return w;
}
int main()
{
    int a;
    scanf("%d",&a);
    int h=years(a);
    printf("%d",h);
    int j=weeks(a);
    printf("
%d",j);
}
