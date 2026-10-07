// Take a number from user and check if its a positive or negative number.

#include<stdio.h>

int main(){
    int x;
    scanf("%d", &x);

    if(x>0){
        printf("Positive Number");
    }
    else{
        printf("Negative Number");
    }
    return 0;
}