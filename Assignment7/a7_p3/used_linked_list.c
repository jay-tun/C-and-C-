/*CH-230-A
a7 p1.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"

int main(){
    char c;
    int a,b;
    struct list *linkedlist=NULL;
    do
    {
        scanf("%c",&c);
        switch (c)
        {
        case 'a':
            scanf("%d",&a);
            linkedlist=push_back(linkedlist,a);
            break;
        case 'b':
            scanf("%d",&b);
            linkedlist=push_front(linkedlist,b);
            break;
        case 'r':
            linkedlist=remove_ele(linkedlist);
            break;
        case 'p':
            print_list(linkedlist);
            break;
        case 'q':
            dispose_list(linkedlist);
            break;
        default:
            break;
        }
        
    } while (c!='q');
    
    return 0;    
}


