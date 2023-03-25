#include<stdio.h>
int checkPrime(int n)
{
    int p=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return p=1;
    }
    return p;
}
int main()
{
    int n;
    printf("Enter a prime number:");
    scanf("%d",&n);
    if(checkPrime(n)==0)
        printf("Yes %d is a prime number",n);
    else
        printf("Not prime number");
    return 0;
}