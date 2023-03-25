#include<stdio.h>
void betweenPrime(int a,int b)
{
    int i,j,p;
    for(i=a;i<=b;i++)
    {
        p=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                p++;
                break;
            }
        }
        if(p==0 && i!=1)
            printf("%d\t",i);
    }
}

int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    betweenPrime(a,b);
    return 0;
}