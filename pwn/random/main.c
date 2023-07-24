#include <stdio.h>
#include <stdlib.h>

int main()
{
    int key = rand() ^ 0xdeadbeef;
    printf("%d",key);
    return 0;
}
