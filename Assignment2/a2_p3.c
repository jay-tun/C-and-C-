/*
CH-230-A
a2 p3.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int weeks, days, hrs;
    scanf("%d %d %d", &weeks, &days, &hrs);
    //converting weeks and days to hours
    int total= weeks*168+ days*24 + hrs;
    printf("Total number of hours=%d\n", total);
    return 0;
}