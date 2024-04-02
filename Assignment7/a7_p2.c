/*CH-230-A
a7_p2.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

struct list
{
    char info;
    struct list *fnext;
    struct list *bnext;
};

//adding to the list
struct list *push_front(struct list *my_list,char c)
{
    struct list *newel;
    newel = (struct list*)malloc(sizeof(struct list*));
    if (newel==NULL)
    {
        printf("Error allocating memory!\n");
        return my_list;
    }
    newel->info=c;
    newel->bnext=NULL;
    newel->fnext=my_list;
    if (my_list==NULL)
    {
        return newel;
    }
    else{
        my_list->bnext = newel;
        return newel;
    }
    
};

//removing from the list
struct list *remove_list(struct list* my_list, char c)
{
    struct list *cursor=NULL;
    struct list *back=NULL;
    struct list *front=NULL;
    cursor = my_list;
    int bool=0;
    while (cursor!=NULL)
    {
        if (cursor->info==c)
        {
            bool=1;
            if (cursor->bnext==NULL)
            {
                cursor=cursor->fnext;
                cursor->bnext=NULL;
                my_list = cursor; 
            }
            else if (cursor->fnext==NULL)
            {
                cursor = cursor->bnext;
                cursor->fnext = NULL;
            }
            else{
                back=cursor->bnext;
                front=cursor->fnext;
                cursor=front;
                cursor->bnext=back;
                cursor=back;
                cursor->fnext=front;
            }           
        }
        cursor=cursor->fnext;
    }
    if (bool==0)
    {
        printf("The element is not in the list!\n");
    }   
    
    return my_list;
};

//print the list
void print_list(struct list *my_list){
    struct list *p;
    for (p =my_list;p!=NULL;p=p->fnext)
    {
        printf("%c ",p->info);
    }
    printf("\n");
}

//reverse the list
void reverse_list(struct list *my_list){
    struct list *cursor,*back;
    cursor = my_list;
    while (cursor->fnext!=NULL)
    {
        cursor=cursor->fnext;
    }
    for (back=cursor; back!=NULL;back=back->bnext)
    {
        printf("%c ", back->info);
    }
    printf("\n");
}


//free the list
void dispose_list(struct list *my_list){
    struct list *nextelem;
    while(my_list!=NULL){
        nextelem = my_list->fnext;
        free(my_list);
        my_list = nextelem;
    }
}

int main(){
    int a;
    struct list *my_list=NULL;
    char c;
    do
    {
        scanf("%d",&a);
        getchar();
        switch (a)
        {
        case 1:
            scanf("%c",&c);
            getchar();
            my_list=push_front(my_list,c);
            break;
        case 2:
            scanf("%c",&c);
            getchar();
            my_list=remove_list(my_list,c);
            break;
        case 3:
            print_list(my_list);
            break;
        case 4:
            reverse_list(my_list);
            break;
        case 5:
            dispose_list(my_list);
            break;
        default:
            a=5;
            break;
        }
    } while (a!=5);

    return 0;    
}
