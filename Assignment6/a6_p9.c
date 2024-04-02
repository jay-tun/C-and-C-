/*CH-230-A
a6 p9.[c or cpp or h]
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

struct list
{
    int info;
    struct list *next;
    
};

//inserting at the position with the value
struct list *insert_pos(struct list *my_list,int pos,int value)
{
    struct list *cursor;
    cursor = my_list;
    int num;
    //determine the number of elements
    while (cursor !=NULL && num<pos)
    {
        cursor = cursor->next;
        num++;
    }
    //when invalid
    if (pos<0 || pos>num)
    {
        printf("Invalid position!\n");
        return my_list;
    }
    else
    {
        struct list *newel;
        newel = (struct list*)malloc(sizeof(struct list));
        if(newel == NULL){
            printf("Error allocating memory\n");
            return my_list;
        }
        cursor = my_list;
        for (int i = 0; i < (pos-1); i++)
        {
            cursor = cursor->next;
        }
        newel->info = value;
        newel->next = cursor->next;
        cursor->next =newel;
        return my_list;
    }   
};

//reversing the elements
struct list *reverse_list(struct list *my_list)
{
    struct list *back = NULL;
    struct list *cursor = my_list;
    struct list *front = NULL;
    while (cursor != NULL)
    {
        front = cursor->next;
        cursor->next = back;
        back = cursor;
        cursor = front;    
    }

    return back;     
};  



//insert the value at the end
struct list *push_back(struct list *my_list,int value)
{   
    struct list *cursor, *newel;
    cursor = my_list;
    newel = (struct list*)malloc(sizeof(struct list));
    if(newel==NULL){
        printf("Error allocating memory\n");
        return my_list;
    }
    newel->info = value;
    newel->next = NULL;
    if (my_list == NULL)
    {
       return newel;
    }
    while (cursor->next != NULL)
    {
        cursor = cursor->next;
    }
    cursor->next = newel;

    return my_list;
};

//insert at the beginning
struct list *push_front(struct list *my_list, int value)
{       
    struct list *newel;
    newel = (struct list *)malloc(sizeof(struct list));
    if(newel==NULL){
        printf("Error allocating memory\n");
        return my_list;
    }
    newel->info = value;
    newel->next = my_list;
    return newel;
};

//remove the first element
struct list *remove_ele(struct list *my_list)
{   
    if(my_list==NULL){
        return my_list;
    }
    my_list->info = 0;
    return my_list->next;
};

//print the list
void print_list(struct list *my_list){
    struct list *p;
    for (p = my_list; p; p=p->next)
    {
        printf("%d ",p->info);
    }
    printf("\n");
}

void dispose_list(struct list *my_list){
    struct list *nextelem;
    while(my_list!=NULL){
        nextelem = my_list->next;
        free(my_list);
        my_list = nextelem;
    }
    
}

int main(){
    char c;
    int a,b,x,y;
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
        case 'i':
            scanf("%d %d",&x,&y);
            linkedlist=insert_pos(linkedlist,x,y);
            break;
        case 'R':
            linkedlist=reverse_list(linkedlist);
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