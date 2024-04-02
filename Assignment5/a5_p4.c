/*
CH-230-A
a5 p4.c
Aung Tun
myemail@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void divby5(float *arr, int n){
    //divides each val in the arr by 5
    for(int i=0;i<n;i++){
        *(arr+i) = *(arr+i)/5.0;
    }
}


int main(){
    float *arr;
    int n;
    scanf("%d",&n);
    //dynamic memory allocation
    arr = (float*)malloc(sizeof(float)*n);
    
    for (int i=0; i < n; i++)
    {
        scanf("%f",&(*(arr+i)));
    }
    
    //before division
    printf("Before:\n");
    for(int i=0;i<n;i++){
        printf("%.3f ",arr[i]);
    }
    //call the function
    divby5(arr,n);
    //after division
    printf("\nAfter:\n");
    for(int i=0;i<n;i++){
        printf("%.3f ",arr[i]);
    }
    printf("\n");
    //deallocation
    free(arr);

    return 0;
}
