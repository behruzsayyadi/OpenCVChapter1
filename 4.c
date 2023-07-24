#include "stdio.h"
#include "math.h"
int main()
{
    // int h = 0 , m = 0;
    int source_h = 0 , source_m = 0;
    int tmp_h = 0 , tmp_m = 0; 
    int  distance_m = 23*60 + 59;
    int flag_h = 0 , flag_m = 0;
    int number = 0;
    scanf("%d", &number);
    scanf("%d %d", &source_h, &source_m);
    for (int i = 0; i < number; i++)
    {
        scanf("%d %d", &tmp_h, &tmp_m);
        int  tempr_m = 0;
        // tempr_h = sqrt((source_h - tmp_h) * (tmp_h - source_h));
        tempr_m = sqrt(((source_h*60 + source_m) - (tmp_h*60 + tmp_m)) * ((tmp_h*60 + tmp_m ) - (source_h*60 + source_m)));
        if(tempr_m < distance_m)
        {
            flag_h = tmp_h;
            flag_m = tmp_m;
            distance_m = tempr_m;
        }
    }
   printf("%d:%d\n",flag_h,flag_m);
    return 0;
}