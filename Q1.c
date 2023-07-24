#include "stdio.h"


int main ()
{
    int password = 0;
    scanf("%d",&password);
    int a, b, c, d;
    int temp;
    scanf("%d",&a);
    if(a == (password / 1000))
    {
        temp = (password % 1000);
        scanf("%d",&b);
        if(b == (temp / 100))
        {
            temp = (password % 100);
            scanf("%d",&c);
            if(c == (temp / 10))
            {
                temp = (password % 10);
                scanf("%d",&d);
                if(d == temp)
                {
                    printf("Welcome\n");
                }
                else
                {
                    printf("Wrong %d\n",d);
                    return 0;
                }
            }
            else
            {
                printf("Wrong %d\n",c);
                return 0;
            }
        }
        else
        {
            printf("Wrong %d\n",b);
            return 0;
        }

    }
    else
    {
        printf("Wrong %d\n",a);
        return 0;
    }

    return 0;
}