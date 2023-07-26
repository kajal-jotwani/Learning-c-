#include <stdio.h>
int main()
{
    int a, b;
    printf("enter first number");
    scanf("%d", &a);
    printf("enter second number");
    scanf("%d", &b);
    // int q = a / b;
    // int r = a - (b * q);
    int r = a%b;
    printf("remainder %d", r);
    return 0;
}