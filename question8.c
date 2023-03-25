#include<stdio.h>

int fact(int n){
    int i,fact =1;
    for(i=1;i<=n;i++){
        fact*=i;
    }
    return fact; // find factorial.
}
 
int combi(int n,int r){  // find combination.
    return fact(n)/(fact(n-r)*fact(r)); // fact function call.
}
void printPascal(int line)
{
   int i,j,k,r;
   for(i=1;i<=line;i++){
    k=1,r=0;
    for(j=1;j<=2*line-1;j++){
        if(j>=line+1-i && j<=line-1+i &&k){
            printf("%3d",combi(i-1,r));  // combi function call.
            k=0;
            r++;
        }
        else{
            printf("  ");
            k=1;
        }
    }
    printf("\n");
   }
}

int main()
{
    int line;
    printf("Enter a number where you get the pascal triangle print:");
    scanf("%d",&line);
    printPascal(line);
    return 0;
}