/*
CH-230-A
a2 p5.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int a;
    int* ptr_a;
    scanf("%d", &a);
    printf("a=%d\n", a);
    ptr_a = &a;
    printf("pointer address=%p\n", ptr_a);
    //increasing the value using pointer
    *ptr_a = *ptr_a + 5;
    printf("modified value=%d\n", *ptr_a);
    //unchanged address
    printf("address of the variable=%p\n", ptr_a);
    return 0;
}