/*
CH-230-A
a5 p6.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int count;
    float *arr,*tmp;
    scanf("%d", &n);
    arr=(float*)malloc(n*sizeof(float));
    if(arr==NULL){
        exit(1);
    }
    for(int i=0;i<n;i++){
        scanf("%f",&(*(arr+i)));
    }
    tmp=arr;
    while (*arr>0)
    {
        arr++;
    }

    count = arr-tmp;
    printf("Before the first negative value: %d elements\n",count);

    free(arr);
    return 0;

}