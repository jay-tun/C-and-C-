/*
CH-230-A
a1 p1.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>

int main(){
    double result;
    /*The result of our calculation*/

    result = (double) (3 + 1) / 5;
   // result =  (3 + 1) / 5.00;

   /*since result is a double type, it will round the 0.800 to 0.0000
   to solve this, we can change integer 5 to double type or convert
   the result of the computation to type double*/
    printf("The value of 4/5 is %lf\n", result);
    return 0;
}
