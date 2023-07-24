#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void f(int b,int *a){
int c=5;
*a=b+c;
b*=*a;
}

int main()
{
    int a= 4,b=3,c=2;

    f(a,&b);
    printf("a = %d\nb = %d\nc = %d",a,b,c);
}
