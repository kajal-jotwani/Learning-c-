#include<stdio.h>
int main(){
int a; 
printf("enter first number");
scanf("%d", &a);
int b;
printf("enter second number");
scanf("%d", &b);
int c;
printf("enter third number");
scanf("%d", &c);
if ( (a+b)>c && (b+c)>a && (c+a)>b)
{
    printf("valid triangle");
}
else
{
    printf("invalid triangle");
}
 
    return 0;
}