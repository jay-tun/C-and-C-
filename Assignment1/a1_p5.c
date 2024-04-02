/*
CH-230-A
a1 p5.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int x = 2138;
    //%9d for printing over 9 places
    printf("x=%9d\n", x);
    float y = -52.358925;
    //11 for 11 printing places and .5 for precision point
    printf("y=%11.5f\n", y);
    char z = 'G';
    //%c for printing char variable 
    printf("z=%c\n", z);
    double u = 61.295339687;
    //%.7 for 7 precision points
    printf("u=%.7lf\n", u);
    return 0;
}