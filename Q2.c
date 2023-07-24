#include "stdio.h"

int main()
{
    int n = 0;
    scanf("%d", &n);
    if(n < 25)
    {
        printf("No.\nKam Hastid!");
    }
    else if(n >= 25 && n < 35)
    {
        printf("No.\nOstad Mokhalef Hastand.");
    }
    else if(n >= 35)
    {
        printf("Yes.\nTamdid Mishavad.");
    }
    return 0;
}