#include <stdio.h>
int prod(int i,int fact)
{
    if(i==0)
    {
        return fact;
    }
    fact=fact*i;
    prod(i-1,fact);
}
int main() {
    int i ;
    printf("Enter the value:\n");
    scanf("%d",&i);
    int res=prod(i,1);
    printf("the factorial is %d",res);
}