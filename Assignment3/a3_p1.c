/*
CH-230-A
a3 p1.c
Aung Tun
atun@jacobs-university.de
*/
#include<stdio.h>

int main(){
    float x;
    int n;
    scanf("%f", &x);
    scanf("%d", &n);
    while(n<!0){
        //in case input is invalid
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    }

    //printing x n times when valid
    for (int i = 0; i < n; i++){
        printf("%f\n", x);
    }        
    return 0;
}