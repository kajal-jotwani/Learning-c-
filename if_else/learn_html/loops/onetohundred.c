#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=0; i<=100; i=i+n){
        printf("%d \n",i);
    }
    return 0;
}