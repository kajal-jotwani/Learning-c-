#include<stdio.h>
int main(){
int a; 
int b;
int c;
printf("enter first number");
scanf("%d", &a);
printf("enter second number");
scanf("%d", &b);
printf("enter third number");
scanf("%d", &c);
if (a>b && a>c)
{
    printf("a is greatest");
}

 if (b>a && b>c)
{
    printf("b is greatest");
}   
if (c>a && c>b)
{
    printf("c is greatest");
}

    return 0;
}