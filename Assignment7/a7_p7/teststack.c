/*CH-230-A
a7_p7.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int main(){
    int n;
    char c;
    struct stack *list;
    list=(struct stack*)malloc(sizeof(struct stack*));
    do
    {
        scanf("%c",&c);
        switch (c)
        {
        case 's':
            scanf("%d",&n);
            getchar();
            push(list, n);
            break;
        case 'p':
            pop(list);
            break;
        case 'e':
            empty(list);
            break;
        case 'q':
            printf("Quit\n");
            break;
        }
        /* code */
    } while (c!='q');
    return 0;
    
}