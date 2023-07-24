#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char tmp[20];

    gets(tmp);
    int *ip = (int *)tmp;
    int rs = 0;
    for(int i = 0; i < 5 ; i++)
    {
        rs += ip[i];
    }
    printf("%d",rs);

    return 0;
}
