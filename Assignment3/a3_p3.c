/*
CH-230-A
a3 p3.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>

float convert(int cm){
    float km = cm/100000.00;//computing cm to km
    return km;
}

int main(){
    int cm;
    scanf("%d", &cm);
    //calling the function and printing the result
    printf("Result of conversion: %f\n",convert(cm));
    return 0;
}