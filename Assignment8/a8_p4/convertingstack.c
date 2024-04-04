/*CH-230-A
a8_p4.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int main(){
    unsigned int n;
    scanf("%d", &n);
    struct stack *list;
    list = (struct stack *)malloc(sizeof(struct stack*));
    unsigned tmp =n;
    while (n!=0)
    {
        push(list,n%2);
        n=n/2;
    }
    printf("The binary representation of %d is ",tmp);
    empty(list);    

    return 0;
}
