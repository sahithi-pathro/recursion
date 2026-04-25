#include <stdio.h>
int odd(int i,int n,int count)
{
    if(i>n)
    {
        return count;
    }
    if(i%2!=0)
    {
     count++;   
    }
    odd(i+1,n,count);
}
int main() {
    int m,n;
    printf("Enter the start and end value:\n");
    scanf("%d%d",&m,&n);
    int res=odd(m,n,0);
    printf("the odd numbers is %d",res );
}