#include<stdio.h>
int main(){
    int r;
    printf("enter no of rows:");
    scanf("%d",&r);
    int c;
    printf("enter no of  column:");
    scanf("%d",&c);
    for(int i=1; i<=r; i++){
          for(int i=1; i<=c; i++){
            printf("*");
          }
            printf("\n");
    }
  
  
    return 0;
}