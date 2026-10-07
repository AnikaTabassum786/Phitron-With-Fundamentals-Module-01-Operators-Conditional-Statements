// Take a number from user and check if its a even number or odd number.

#include<stdio.h>

int main(){

    int x;
    scanf("%d", &x);

    if(x%2 == 0){
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
    

    return 0;
}