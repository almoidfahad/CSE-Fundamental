#include <stdio.h>
int main()
{
    int a, b;
    short int c;
    scanf("%d %d, %hd", &a, &b, &c);

    printf("a =%d b=%d, c=%hd", &a, &b, &c);
}