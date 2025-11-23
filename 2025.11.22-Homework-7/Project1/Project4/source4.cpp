#include<cstdio>
#include<cstring>

int Compare(char S1[], char S2[]) 
{
    return strcmp(S1, S2) == 0;
}
int main(int argc,char** argv) 
{
    char S1[100], S2[100];
    scanf("%s", S1);
    scanf("%s", S2);
    if (Compare(S1, S2)) 
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}