#include "stdio.h"
int canBe(int a , int b,int c)
{
    
    if((a*a) == (b*b + c*c))
        return 1;

    return 0;
}

int checkIfPossible(int number)
{
    int temp = number;
    int n1,n2,n3;
    n1 = temp%10;
    temp = temp/10;
    n2 = temp%10;
    temp = temp/10;
    n3 = temp%10;
    temp = temp/10;
    if(canBe(n1,n2,n3)||canBe(n2,n1,n3)||canBe(n3,n1,n2))
    {
        // printf("Yes\n");
        return 1;
    }
    else
    {
        // printf("No\n");
        return 0;
    } 
}
int main ()
{
    int number1 = 0 , number2 = 0;
    scanf("%d %d", &number1, &number2);
    int counter = 0;
    for(int i = number1; i <= number2; i++)
    {
        if(checkIfPossible(i))
            counter++;
        else
            continue;
    }
    printf("%d\n", counter);
    return 0;
}