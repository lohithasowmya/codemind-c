#include<stdio.h>
#include<math.h>
float distance(int a,int b,int c,int d)
{
    float x;
    x=sqrt((c-a)*(c-a)+(d-b)*(d-b));
    return x;
}
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    float y=distance(a,b,c,d);
    printf("%0.4f",y);
}