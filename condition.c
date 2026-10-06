#include<stdio.h>

int main(){
    int money;
    scanf("%d", &money);
    if(money >= 5000){
        printf("will go Cox's Bazar\n");
          if(money >= 12000){
             printf("will go Saint Martin\n");
          }
          else{
            printf("Will back from Cox's Bazar\n");
          }
    }
    else{
        printf("Do not go any where\n");
    }
    return 0;
}