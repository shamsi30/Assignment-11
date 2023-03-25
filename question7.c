#include<stdio.h>
void printFib(int n)
{
    int i,fib1=1,fib2=1,sum=0;
    printf("First %d fibonaci numbers are........\n",n);
    printf("%d\t%d\t",fib1,fib2);
    for(i=2;i<n;i++)
    {
        sum=fib1+fib2;
        printf("%d\t",sum);
        fib1=fib2;
        fib2=sum;
    }
}
int main()
{
    int n;
    printf("Enter a number to find fib series:");
    scanf("%d",&n);
    printFib(n);
    return 0;
}