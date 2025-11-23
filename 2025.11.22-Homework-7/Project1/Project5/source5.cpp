#include<cstdio>

int main(int argc,char** argv) 
{
    char str[1000];
    int count = 0;
    int i = 0;
    fgets(str, sizeof(str), stdin);
    count = 1;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}