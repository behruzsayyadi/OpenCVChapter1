#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 1000

int* readBigNum(char* n)
{
    static int number[100];

    for(int i = 0; i <strlen(n);i++)
    {
        if( !isdigit(n[i]) )
        {
            puts("reEnter the number");
            gets(n);
            i = 0;
        }
    }
    for(int i = 0; i <strlen(n);i++)
    {
        number[i] = n[i] - '0';
    }
    return number;

}

void printBigNum(char *n,int len)
{
    int * number;
    number = readBigNum(n);
    for(int i = 0; i < len;i++)
    {
        printf("%d",*(number+i));
    }
    printf("\n");
    return;
}

int add(char *n1,char *n2,int n1len,int n2len,int *outn)
{
    int * number1 ,*number2 , minlen , maxlen, flag=0;
    int num1[100],num2[100];
    number1 = readBigNum(n1);
    for(int i = 0;i < n1len;i++)
    {
        num1[i] = *(number1+i);
    }
    number2 = readBigNum(n2);
    for(int i = 0;i < n2len;i++)
    {
        num2[i] = *(number2+i);

    }

//    for(int i = 0; i < 5;i++)
//    {
//        printf("%d",*number1+i);
//
//    }
//    printf("\n");
//    for(int i = 0; i < 5;i++)
//    {
//        printf("%d",*number2+i);
//
//    }
//    printf("\n");
    if(n1len < n2len)
    {
        maxlen = n2len;
        minlen = n1len;
        flag++;
    }
    else if (n2len < n1len)
    {
        minlen = n2len;
        maxlen = n1len;
        flag = 0;
    }
    else
        flag = 2;

    int j = 0;
    for(int i = 0; i < maxlen;i++)
    {
        outn[i] = 0;

    }
    if (flag == 1)
    {

        for(int i = n2len-1 ; i >= minlen ;i-- )
            outn[j++] = num2[i];
        for(int i = minlen-1; i >= 0; i--)
        {
            if((num1[i] + num2[i])>9)
            {
                outn[j++] = outn[j] +num1[i] + num2[i] - 10;
                outn[j]++;
            }
            else
                outn[j++] = num1[i] + num2[i];

        }
    }
    else if (flag == 0)
    {
        for(int i = n1len-1 ; i >= minlen ;i-- )
            outn[j++] = num1[i];
        for(int i = minlen-1; i >= 0; i--)
        {
            outn[j++] = num2[i] + num1[i];

        }
    }
    else
    {
        for(int i = n1len-1; i >= 0; i--)
        {
            outn[j++] = num2[i] + num1[i];
        }
    }
    for( j= 0; j<maxlen;j++)
    {
        printf("%d",outn[j]);
    }
    return j;

}


//int add(char *n1,char *n2,int n1len,int n2len,char *outn)
//{
//
//}


int main ()
{
    char str1[100];
    gets(str1);
//    int * number1;
//    number1 = readBigNum(str1);

    char str2[100];
    gets(str2);
//    int * number2;
//    number2 = readBigNum(str2);
//    for(int i = 0; i < 5;i++)
//    {
//        printf("%d",*number1+i);
//
//    }
//    printf("\n");
//    for(int i = 0; i < 5;i++)
//    {
//        printf("%d",*number2+i);
//
//    }
//    printf("\n");
    int i  = add(str1,str2,strlen(str1),strlen(str2),str2);
//    printBigNum(str1,strlen(str1));





    return 0;
}
