#include<stdio.h>
void primePrint(int n)
{
    int i,j,p;
    for(i=1;i<=n;i++)
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
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    primePrint(n);
    return 0;
}