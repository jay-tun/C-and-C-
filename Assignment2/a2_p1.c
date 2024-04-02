/*
CH-230-A
a2 p1.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>

int main(){
    double x,y;
    int a,b;
    char i,j;
    //take input of two doubles
    scanf("%lf %lf", &x, &y);
    //sum and printing
    double sum = x + y;
    printf("sum of doubles=%lf\n", sum);
    //difference and printing
    double difference = x - y;
    printf("difference of doubles=%lf\n", difference);
    //square of first double
    printf("square=%lf\n", x*x);
    scanf("%d %d", &a, &b);
    //computes and prints sum
    int sum_of_ints = a +b;
    printf("sum of integers=%d\n", sum_of_ints);
    //computes and prints product
    int product_of_ints = a*b;
    printf("product of integers=%d\n", product_of_ints);
    //char inputs
    getchar();
    scanf("%c %c", &i, &j);
    //computes sum and product
    int sum_of_chars= i+j;
    int product_of_chars = i*j;
    //prints the result as decimal
    printf("sum of chars=%d\n", sum_of_chars);
    printf("product of chars=%d\n", product_of_chars);
    //prints them as chars
    printf("sum of chars=%c\n", sum_of_chars);
    printf("product of chars=%c\n", product_of_chars);
    return 0;
}