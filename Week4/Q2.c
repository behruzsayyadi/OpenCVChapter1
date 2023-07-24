#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char message[1000];
    scanf("%[^\n]", message);
    int a_count = 0 ,e_count = 0 ,o_count = 0 ,u_count = 0, i_count = 0;
    for (int i = 0; message[i] != '\0'; i++) 
    {
        if(message[i] == 'a' || message[i] == 'A')
            a_count++;
        else if(message[i] == 'e' || message[i] == 'E')
            e_count++; 
        else if(message[i] == 'o' || message[i] == 'O')
            o_count++;
        else if(message[i] == 'i' || message[i] == 'I')
            i_count++;
        else if(message[i] == 'u' || message[i] == 'U')
            u_count++;
    }
    printf("A,a : %d\nE,e : %d\nI,i : %d\nO,o : %d\nU,u : %d\n",a_count,e_count,i_count,o_count,u_count);

  return 0;
}