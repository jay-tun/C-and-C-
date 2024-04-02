/*
CH-230-A
a2 p6.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>

int main(){
    double x, y;
    double* ptr_one, *ptr_two, *ptr_three;
    //two ptrs point to x
    ptr_one = &x;
    ptr_two = &x;
    //ptr for y
    ptr_three = &y;
    scanf("%lf %lf", &x, &y);
    //prints same value and memory for x
    printf("x=%lf, memory address=%p\n",x,ptr_one);
    printf("x again=%lf, same memory address=%p\n",x,ptr_two);
    //different memory address for y
    printf("y=%lf, different address for y=%p\n",y,ptr_three);
    return 0;
}
