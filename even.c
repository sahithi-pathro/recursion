#include <stdio.h>
void even(int i)
{
    if(i<-7)
    {
        return;
    }
    if(i%2==0)
    {
     printf("%d\n",i);   
    }
    even(i-1);
}
int main() {
    even(4);
}