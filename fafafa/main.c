#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int n;
//    int m = 0;
//    while(true){
//        scanf("%d",&n);
//        if(n > m)
//            m = n;
//        if(n < 0)
//            break;
//
//
//    }
//
//    if(m%2 == 0){
//        int temp = 0;
//        int i = 1;
//        while(i < m){
//            temp = temp * i;
//            i++;
//        }
//    }
//    else{
//
//    }

    int n = 29;

    int binaryNum[32];

    // counter for binary array
    int i = 0;
    while (n > 0) {
        // storing remainder in binary array
        binaryNum[i] = n % 16;
        n = n / 16;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);

    return 0;
}
