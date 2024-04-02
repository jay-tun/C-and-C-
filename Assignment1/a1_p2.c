/*
CH-230-A
a1 p2.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int result; /*The result of our calculation */
    result = (2 + 7) * 9 / 3;
    printf("The result is %d\n", result);
    /* %d expects an int argument and since it was not parsed,
    the compiler was trying to print the memory location of %d.
    We can put the argument result to fix the problem*/
    return 0;
}
