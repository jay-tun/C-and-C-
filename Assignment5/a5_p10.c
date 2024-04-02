/*
CH-230-A
a5 p10.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>

void recursFunc(int n){
    if(n!=0){
        printf("%d\n",n);
        recursFunc(n-1);//recursion
    }
}

int main(){
    int n;
    scanf("%d",&n);
    recursFunc(n);//call the function

    return 0;
}