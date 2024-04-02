/*
CH-230-A
a2 p8.c
Aung Tun
atun@jacobs-university.de
*/
#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    if(num%2==0 && num%7==0){
        //if modulus of 2 and 7 is zero
        //divisible by both 2 and 7
        printf("The number is divisible by 2 and 7\n");
    }
    else{
        //if not not divisible
        printf("The number is NOT divisible by 2 and 7\n");
    }
    return 0;
}