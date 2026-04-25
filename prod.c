#include <stdio.h>
int output(int i,int prod)
{
    if(i==0)
    {
        return prod;
    }
    if(i%2==0)
    {
        prod=prod*i;
    }
    output(i,prod);
}
int main() {
    int i;
    printf("Enter the values:\n");
    scanf("%d",&i);
    int res=output(i,1);
    printf("the product is:%d",res);
    return 0;
}