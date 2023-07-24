#include <stdio.h>
#include <string.h>
//#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

// Global variables

char buff[256];//the buffer that takes every sheet


char thread0[21];// Strings that we pass to threads
char thread1[21];
char thread2[21];
char thread3[21];

//reading sheet and assigning it into threads with index of the sheet as 'i'
void read_assign(int i)
{
    FILE *fp;
    // char tmp[10];
    // sprintf(tmp,"%d",i);
    // strcat(tmp,".txt");
    fp = fopen("1.txt","r");


    fread(buff,256,1,fp);



    memcpy(thread0,&buff[0],20);
    thread0[20] = '\0';
    memcpy(thread1,&buff[21],20);
    thread1[20] = '\0';
    memcpy(thread2,&buff[42],20);
    thread2[20] = '\0';
    memcpy(thread3,&buff[63],20);
    thread3[20] = '\0';
    fclose(fp);

}
int main ()
{
    read_assign(1);

    printf("%s\n",thread0);
    printf("%s\n",thread1);
    printf("%s\n",thread2);
    printf("%s\n",thread3);
    //printf("%d\n",strlen(buff));

    return 0;
}
