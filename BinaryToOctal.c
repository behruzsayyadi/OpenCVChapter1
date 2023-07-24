#include <math.h>
#include <stdio.h>
int convert(long long bin);
int main() 
{
    long long bin,bin_tmp;
    int oct = 0, dec = 0, i = 0;
    scanf("%lld", &bin);
    bin_tmp = bin;

    while (bin_tmp != 0)
    {
        dec += (bin_tmp % 10) * pow(2, i);
        ++i;
        bin_tmp /= 10;
    }
    i = 1;
    while (dec != 0)
    {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    printf("%d\n",oct);
    return 0;
}
