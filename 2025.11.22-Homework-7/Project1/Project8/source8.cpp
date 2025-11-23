#include<cstdio>
#include<cstring>

int main(int argc,char** argv) 
{
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    char povtor = '\0';
    for (int i = 0; i < strlen(str); i++)
    {
        if (strchr(str, str[i]) != strrchr(str, str[i])) 
        {
            povtor = str[i];
            break;
        }
    }
    if (povtor != '\0') 
    {
        printf("%c\n", povtor);
    }
    return 0;
}