#include "stdio.h"

int main()
{
    int h = 0 , m = 0 , neww = 0;
    int tmp_h = 0 , tmp_m = 0; 
    int total_h  = 0, total_m = 0;
    
    int number = 0;
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
    {
        scanf("%d %d", &tmp_h, &tmp_m);
        m += tmp_h*60;
        m += tmp_m;
    }

    neww = m/number;
    if((neww / 60) >= 0)
    {
        h += neww / 60;
        neww = neww % 60;
    }       
    // printf("%d\t%d", h,m); 
    total_h = h ;
    total_m = neww;
    if(total_h >= 12)
        printf("%d:%dPM\n",total_h -12,total_m);
    else 
    {
        if(total_h == 0)
            printf("%d:%dAM\n",total_h+12 ,total_m);
        else
            printf("%d:%dAM\n",total_h ,total_m);
    }
    return 0;
}