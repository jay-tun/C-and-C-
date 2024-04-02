/*
CH-230-A
a4 p9.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int prodminmax(int arr[], int n){
    int max = arr[0];
    //find the max
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    } 
    int min = arr[0];
    //find the min
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    //return their product
    return min*max;
}

int main(){
    int n,*arr;
    scanf("%d", &n);
    //dynamic memory allocating
    arr = (int*)malloc(sizeof(int)*n);
    if(arr==NULL){
        exit(1);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&*(arr+i));
    }
    printf("Product of min and max is %d\n",prodminmax(arr,n));
    //deallocating
    free(arr);

    return 0;
}