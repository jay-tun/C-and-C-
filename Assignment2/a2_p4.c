/*
CH-230-A
a2 p4.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>

int main(){
    float a,b,h;
    scanf("%f %f %f", &a,&b,&h);//inputs
    float square = a*a;
    printf("square area=%f\n", square);//square area
    float rectangle = a*b;
    printf("rectangle area=%f\n", rectangle);//rectangle area
    float triangle= a*h/2;
    printf("triangle area=%f\n", triangle);//triangle area
    float trapezoid= (a+b)*h/2;
    printf("trapezoid area=%f\n", trapezoid);//trapezoid area
    return 0;
}