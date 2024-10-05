#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    // Arithmetic operator
    /*

    int a = 1000, b = 10045;
    double c = 200000;
    int d = 45, h = 10;

    long long result = 1ll * a * b * c;

    int a = 10, b = 60;

    long long result = b / a;
    printf("%lld", result);
    */

    // Assignment operator
    // = , += , -= , *= , %=,
    // int a = 5;
    // a += 10;
    // printf("%d", a);

    // int a = 15;
    // // printf("%d\n", a++);
    // printf("%d\n", ++a);

    // Logical operators
    //  bool result = !((2 < 5) && (4 > 5) && (5 < 6));
    //  //              True        True        True
    //  printf("%d", result);

    // int price = 40;
    // if (price <= 70)
    // {
    //     printf("Buy 4 ages\n");
    //     printf("Take %d Taka back", 50 - price);
    // }
    // else
    // {
    //     printf("buy 2 ages");
    // }

    int a;
    scanf("%d", &a);

    if (a < 5)
    {
        printf("A is less than 5\n");
    }
    else if (a < 10)
    {
        printf("A is less Than 10\n");
    }
    else if (a < 15)
    {
        printf("A is less than 15\n");
    }
    else
    {
        printf("A is less than 100\n");
    }
    printf("After if else ladder");

    return 0;
}
