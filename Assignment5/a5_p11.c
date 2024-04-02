/*
CH-230-A
a5 p11.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>

int detPrime(int x1,int x){
    if (x==1)
    {
        return 1;
    }
    else{
        if(x1%x==0){
            return 0;
        }
        else{
            return detPrime(x1,x-1);
        }
    }
    
}

int main(){
    int x;
    int check;
    scanf("%d", &x);

    if(x==1){
        check = 0;
    }
    else{
        check =detPrime(x,x/2);
    }
    if(check==1){
        printf("%d is prime\n",x);
    }
    else{
        printf("%d is not prime\n",x);
    }

    return 0;
}