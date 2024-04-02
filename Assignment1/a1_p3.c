/*
CH-230-A
a1 p3.c
Aung Tun
atun@jacobs-university.de
*/


#include <stdio.h>

int main(){
    float result; /*The result of the division */
    int a = 5;
    int b = 13.5;
    result = (float) a / b;
    printf("The result is %f\n", result);
    /*originally, since %d expects int type, but float type argument was parsed
    so the compiler was giving error. To fix it, we change %d to %f, and also since 
    both variables that were computed are int type, we change them to float type as well 
    so that we don't get 0.0000 as an answer.*/
    return 0;
}