#include <stdio.h>
#include <string.h>

int main()
{
    int char_num = 0, shift = 0;

    char message[100], ch;

    scanf("%d %d\n", &char_num, &shift);
    gets(message);

    for(int i = 0; message[i] != '\0'; i++)
    {
        ch = message[i];
        if(ch >= 'a' && ch <= 'z')
        {
            ch = ch - (shift % 26);
            if(ch < 'a')
            {
                ch = ch + ('z' - 'a' + 1);
            }
            message[i] = ch;
        }
        // else if(ch >= 'A' && ch <= 'Z')
        // {
        //     ch = ch - shift;
        //     if(ch < 'A')
        //     {
        //         ch = ch + ('Z' - 'A' + 1);
        //     }
        //     message[i] = ch;
        // }
    }
    printf("%s\n", message);
    return 0;
}