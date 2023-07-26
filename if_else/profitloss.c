#include <stdio.h>
int main()
{
    int x;
    printf("enter cost price : \n");
    scanf("%d", &x);
    int y;
    printf("enter selling price : \n");
    scanf("%d", &y);
    if (y - x >= 0)
    {
        int profit = y - x;
        printf("profit:%d", profit);
    }
    else
    {
        int loss = x - y;
        printf("loss:%d", loss);
    }
    return 0;
}
