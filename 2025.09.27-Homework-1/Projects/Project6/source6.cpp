#include<cstdio>

int main(int argc, char** argv) {
    long long a;
    scanf_s("%lld", &a);
    printf("%lld25\n", (a / 10) * (a / 10 + 1));
    return 0;
}
