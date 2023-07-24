#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
    char str1[100];
    gets(str1);
    int numbers = 0, numbers_weight = 0;
    for(int i = 0 ; str1[i] != '\0'; i++)
    {
        if(isdigit(str1[i]))
        {
            numbers_weight +=(int)str1[i] - 48;
            
            numbers += (int)str1[i]*((int)str1[i] - 48);
            //printf("%d\n%d\n", numbers_weight, numbers);
        }
    }
    float fin = ((float)numbers/(float)numbers_weight);
    printf("%.2f\n",fin);
  return 0;
}