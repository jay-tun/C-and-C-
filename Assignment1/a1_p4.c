/*
CH-230-A
a1 p4.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int x = 17, y = 4;
    printf("x=%d\ny=%d\n", x,y);
    //adding 
    int sum = x + y;
    //printing
    printf("sum=%d\n", sum);
    //product and printing
    int product = x * y;
    printf("product=%d\n", product);
    //substracting and print
    int difference = x - y;
    printf("difference=%d\n", difference);
    //dividing
    float division = (float)x / y;
    printf("division=%lf\n", division);
    //modulus finding
    int reminder_of_division= x % y;
    printf("remainder of division=%d\n", reminder_of_division);
    return 0;
}
