#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter a b c: ");
    scanf("%d %d %d", &a, &b, &c);
    switch (a > b && a > c)
    {
    case 1:
        printf("a is the boss");
        break;

    case 0:
        printf("a is not the boss");
        break;
    }
    return 0;
}