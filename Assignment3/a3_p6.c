/*
CH-230-A
a3 p6.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>

float to_pounds(int kg, int g){
    //calculating kg and g to pounds
    float pounds = kg*2.2 + g*0.0022;
    return pounds;
}

int main(){
    int kg, g;
    scanf("%d %d",&kg, &g);
    //call the function
    printf("Result of conversion: %f\n", to_pounds(kg, g));
    return 0;
}