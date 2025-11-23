#include<cstdio>
#define _CRT_SECURE_NO_WARNINGS
unsigned char Change(unsigned char c)
{
    if (c >= 'a' && c <= 'z')
    {

        return c - 'a' + 'A';
    }
    else if (c >= 'A' && c <= 'Z')
    {
        return c - 'A' + 'a';
    }
    return c;
}
int main(int argc, char** argv)
{
    unsigned char c;
    scanf_s("%ñ", &c);
    printf("%ñ\n", Change(c));
    return 0;
}