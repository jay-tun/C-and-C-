/*
CH-230-A
a2 p9.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>

int main(){
    char c;
    scanf("%c", &c);
    //ascii interval for digits
    if(c >= 48 && c<= 57){
        printf("%c is a digit\n", c);
    }
    //ascii interval for letters
    else if((c>=65 && c<=90) || (c>=97 && c<=122)){
        printf("%c is a letter\n", c);
    }
    //for other characters
    else{
        printf("%c is some other symbol\n", c);
    }
    return 0;
}