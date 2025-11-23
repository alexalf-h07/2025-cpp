#include<cstdio>
#include<cstring>

unsigned char ToUpper(unsigned char c) 
{
    if (c >= 'a' && c <= 'z') 
    {
        return c - 'a' + 'A';
    }
    return c;
}
int main(int argc,char** argv) 
{
    unsigned char c;
    scanf_s("%d", &c);
    unsigned char result = ToUpper(c);
    printf("%d\n", result);
    return 0;
}