/*CH-230-A
a7_p5.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

int ascending(const void *ptr1,const void *ptr2){
    const int *a=(const void*) ptr1;
    const int *b=(const void*) ptr2;
    if(*a<*b){
        return -1;
    }
    else if (*a>*b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int descending(const void *ptr1,const void *ptr2){
    const int *a=(const void*) ptr1;
    const int *b=(const void*) ptr2;
    if(*a<*b){
        return 1;
    }
    else if (*a>*b)
    {
        return -1;
    }
    else
    {
        return 0;
    }   
}

int main(){
    int n=0;
    char c;
    int *arr=NULL;
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    if (arr == NULL)
    {
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    getchar();
    do
    {
        scanf("%c",&c);
        getchar();
        switch (c)
        {
        case 'a':
            qsort(arr,n,sizeof(arr[0]),ascending);
            for (int i = 0; i < n; i++)
            {
                printf("%d ",arr[i]);
            }
            printf("\n");            
            break;
        case 'd':
            qsort(arr,n,sizeof(arr[0]),descending);
            for (int i = 0; i < n; i++)
            {
                printf("%d ",arr[i]);
            }
            printf("\n");
            break;
        default:
            c='e';
            break;
        }
    } while (c!='e');

    return 0;    
}