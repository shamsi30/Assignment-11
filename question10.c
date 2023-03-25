#include<stdio.h>

/* if n=3;
than the series is = 1!/1 + 2!/2 + 3!/3 . */

void sumSeries(int n)
{
    int i,fact=1,sum=0;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum+=(fact/i);
    }
    printf("Sum of the %d'th term of the series is %d",n,sum);
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    sumSeries(n);
    return 0;
}