#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char reshte[90];
    int total = 0;
    int a = 0, b = 0, c = 0, d = 0;
    gets(reshte);
    for(int i = 0; i < 90 ;i++)
    {
        if(reshte[i] == '+')
        {
            a += ((reshte[i-1] - '0') + (reshte[i+1] - '0'));
        }


    }
    total = a + b + c + d;
    printf("\n%d",total);
    return 0;
}
