/*
CH-230-A
a4 p6.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void great_finder(int *arr, int n){
    int grtst1, grtst2,loc;
    grtst1=*arr;
    //finding the largest num
    for(int i=0;i<n;i++){
        if(*(arr+i)>=grtst1){
            grtst1 = *(arr+i);
            loc = i;
        }
    }
    *(arr+loc) = '\0';
    //finding second largest num
    grtst2=*arr;
    for(int i=0;i<n;i++){
        if(*(arr+i)>=grtst2){
            grtst2 = *(arr+i);
        }
    }
    printf("Two greatest numbers are %d and %d\n",grtst1,grtst2);

}

int main(){
    int n,*arr;
    scanf("%d",&n);
    //dynamic memory allocation
    arr = (int*)malloc(sizeof(int)*n);
    if(arr==NULL){
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&*(arr+i));
    }

    great_finder(arr,n);
    //releasing memory
    free(arr);
        
    return 0;
}