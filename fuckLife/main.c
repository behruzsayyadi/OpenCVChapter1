#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * f = fopen("myfile.txt","r");
    if(f == NULL){
        printf("file not found!\n");
    }
    printf("Hello world!\n");
    return 0;
}
