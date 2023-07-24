#include "stdio.h"
int func(int a , int b,int c)
{
    
    if((a*a) == (b*b + c*c))
        return 1;

    return 0;
}
int main ()
{
    int number = 0 , temp = 0;
    scanf("%d", &number);
    temp = number;
    int n1,n2,n3;
    n1 = temp%10;
    temp = temp/10;
    n2 = temp%10;
    temp = temp/10;
    n3 = temp%10;
    temp = temp/10;
    if(func(n1,n2,n3)||func(n2,n1,n3)||func(n3,n1,n2))
        printf("Yes\n");
    else printf("No\n");
    return 0;
}