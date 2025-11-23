#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Palindrom(char* str);
int main(int argc, char** argv)
{
    char* str = (char*)calloc(100, sizeof(char));
    scanf("%99s", str);
    Palindrom(str);
    free(str);
    return 0;
}
void Palindrom(char* str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len += 1;
    }
    for (int i = 0; i < len / 2; ++i)
    {
        if (str[i] != str[len - 1 - i])
        {
            printf("no");
            return;
        }
    }
    printf("yes");
    return;
}