#include<stdio.h>
int nextPrime(int a)
{
    int i,j;
    for(i=a+1;i>0;i++)
    {
        int p=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                p++;
                break;
            }
        }
        if(p==0)
            return i;
    }
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int f=nextPrime(n);
    printf("Next prime number is %d",f);
    return 0;
}