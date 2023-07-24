#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);

    int arr1[20] , arr2[20];
    for (int i = 0; i < n;i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < m;i++)
    {
        scanf("%d", &arr2[i]);
    }
    int i = 0 , j = 0;
    int flag = 0;
    while (i < n && j < m)
    {
        if(arr1[i] == arr2[j])
        {
            i++;
            j++;
            if (j == m)
            {
                flag = 1;
                break;
            }
            
        }
        else
        {
            i = i - j + 1;
            j = 0;
        }
    }
    if(flag == 1)
    {
        printf("%d\n",i - m);
    }
    return 0;
}