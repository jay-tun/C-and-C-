/*CH-230-A
a8_p4.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

void push(struct stack *list,int n){
    if (list->count==12)
    {
        printf("Pushing Stack Overflow\n");
    }
    else{
       printf("Pushing %d\n",n);
        list->arr[list->count]=n;
        list->count++;
    }
    
}

void pop(struct stack *list){
    if (list->count==0)
    {
        printf("Popping Stack Underflow\n");
    }
    else{
        list->count--;
        printf("Popping %d\n",list->arr[list->count]);
        list->arr[list->count]=0;
    }
    
}

void empty(struct stack *list){
    while (list->count>0)
    {
        list->count--;
        printf("%d",list->arr[list->count]);
    }
    printf("\n");
}

void isEmpty(struct stack *list){
    if(list->count==0){
        printf("Stack is empty\n");
    }
}