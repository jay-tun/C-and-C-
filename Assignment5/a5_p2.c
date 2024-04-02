/*
CH-230-A
a5 p2.c
Aung Tun
myemail@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>

void divby5(float arr[], int n){
    //divides each val in the arr by 5
    for(int i=0;i<n;i++){
        arr[i] = arr[i]/5.0;
    }
}


int main(){
    float arr[7]={5.5,6.5,7.75,8.0,9.6,10.36};
    int n = 6;
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

    return 0;
}
