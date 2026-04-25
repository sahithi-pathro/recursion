#include <stdio.h>
int output(int a,int sum)
{
    if(a==0)
    {
        return sum;
    }
    int dig=a%10;
    sum=sum+dig;
    a=a/10;
    output(a,sum);
}
int main() {
    int a;
    printf("Enter the  value:\n");
    scanf("%d",&a);
    int res=output(a,0);
    printf("The sum is %d",res);
    return 0;
}