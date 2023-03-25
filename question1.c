#include<stdio.h>
int FindLcm(int x,int y){
    int i;
    for(i=1;i<=x*y;i++)
    {
        if(i%x==0 && i%y==0)
            return i;
    }
}
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("The LCM of two numbers are %d",FindLcm(x,y));
    return 0;
}
