/*CH-230-A
a7_p6.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct person
{
    char name[30];
    int age;
};


int name_sort(struct person *arr,int i);
int age_sort(struct person *arr,int i);


void printing(struct person *arr,int n){
    for (int i = 0; i < n; i++)
    {
        printf("{%s, %d",arr[i].name,arr[i].age);
    }
    printf("\n");
}

int age_sort(struct person *arr,int i){
    if (arr[i-1].age >arr[i].age){
        return 1;
    }
    else if (arr[i-1].age==arr[i].age)
    {
        return name_sort(arr,i);
    }
    else
    {
        return 0;
    }
}


int name_sort(struct person *arr,int i){
    if (strcmp(arr[i-1].name,arr[i].name)==0)
    {
        return age_sort(arr,i);
    }
    else if (strcmp(arr[i-1].name,arr[i].name)>0) 
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}


void swapping(struct person *one, struct person *two) 
{ 
    struct person temp = *one; 
    *one = *two; 
    *two = temp; 
}

void bubble_sort(struct person *arr,int n,int (*func)(struct person *arr,int i))
{
    int bool;
    do
    {
        bool=0;
        for (int i = 1; i < n; i++)
        {
            if (func(arr,i) == 1)
            {
                swapping(&arr[i-1],&arr[i]);
            }
            bool=1;
        }
        
    } while (bool==0);
}

int main(){
    int n;
    scanf("%d",&n);
    struct person *arr;
    arr=(struct person*)malloc(sizeof(struct person*)*n);
    if (arr == NULL)
    {
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].age);
    }
    //for name sorting
    bubble_sort(arr,n,name_sort);
    printing(arr,n);
    //sorting with age
    bubble_sort(arr,n,age_sort);
    printing(arr,n);

    free(arr);
    return 0;
}