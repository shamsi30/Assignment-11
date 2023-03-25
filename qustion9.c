#include<stdio.h>
#include<math.h>

void findSquare(int n)
{
    int x= powf(n,2); // find the square of given number.
    printf("The square of %d is %d",n,x);
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
     findSquare(n);
     return 0;
}