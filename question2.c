#include<stdio.h>
int Lcm(int x, int y)
{
    for(int i=1;i<=x*y;i++)
    {
        if(i%x==0 && i%y==0)
            return i;
    }
}
int Hcf(int x,int y)
{
    return x*y / Lcm(x,y);
}
int main()
{
    int x,y;
    printf("Enter two numbers x and y:");
    scanf("%d %d",&x,&y);
    printf("HCF of %d and %d is %d",x,y,Hcf(x,y));
    return 0;
}