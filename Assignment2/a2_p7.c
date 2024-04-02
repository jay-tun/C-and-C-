/*
CH-230-A
a2 p7.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int i=8;
    while (i >= 4){
        /*the error occured because the instruction
        was not put inside while curly bracket.*/
        printf("i is %d\n", i);
        i--;
    }
    printf("That’s it.\n");
    return 0;
}