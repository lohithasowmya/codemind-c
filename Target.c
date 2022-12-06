#include<stdio.h>
void target(int p1P2,int p2P2,int p3P3,int p4P4)
{
    if(p1P2>=10 && p2P2>=10 &&p3P3>=10 &&p4P4>=10)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
int main()
{
    int p1P2,p2P2,p3P3,p4P4;
    scanf("%d %d %d %d",&p1P2,&p2P2,&p3P3,&p4P4);
    target(p1P2,p2P2,p3P3,p4P4);
}