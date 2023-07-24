#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if((a < (b + c)) && (b < (a + c)) && (c < (a + b)))
    {
        printf("Yes\n");
        if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b))
            printf("Ghaemol Zavie\n");
        else if((a == b) && (b == c) && (c == a))
            printf("Motesaviol Azlae\n");
        else if((a == b) || (a == c) || (b == c))
            printf("Motesaviol Sagheyn\n");
        else
            printf("None\n");
    }
    else
        printf("No\n");
    return 0;
}