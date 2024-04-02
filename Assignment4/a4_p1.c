/*
CH-230-A
a4 p1.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>
#include<math.h>

int main(){
    float x, l,s, i;
    scanf("%f %f %f", &x, &l, &s);
    
    for (i=x; i<=l;i= i+s){
        printf("%f %f %f\n", i,i*i*M_PI, 2*i*M_PI);
    } 
    return 0;
}