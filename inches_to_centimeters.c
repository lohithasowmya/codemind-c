#include<stdio.h>
float height(int a)
{
    float b;
    b=a*2.54;
    return b;
}
int main()
{
    int a;
    scanf("%d",&a);
    float x=height(a);
    printf("%0.2f",x);
}