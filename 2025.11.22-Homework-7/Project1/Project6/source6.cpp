#include<cstdio>

int main(int argc,char** argv) 
{
    char str[1000];
    int word_count = 0;
    int i = 0;
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') 
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\n' || str[i + 1] == '\0'))
        {
            word_count++;
        }
        i++;
    }
    printf("%d\n", word_count);
    return 0;
}