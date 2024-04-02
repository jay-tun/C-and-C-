/*
CH-230-A
a4 p3.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#include<math.h>

//find the geometric mean
float geometric_mean(float arr[], int num){
    float product = 1.0;
    float gmean;
    for(int i=0;i<num;i++){
        product = product*arr[i];
    }
    gmean = powf(product,(float)(1.0/num));
    return gmean;

}
//find the highest num
float highest(float arr[],int num){
    float tmp=arr[0];
    for(int i=0;i<num;i++){
        if(arr[i]>tmp){
            tmp = arr[i];
        }
    }
    return tmp;
}
//lowest num
float lowest(float arr[],int num){
    float tmp=arr[0];
    for(int i=0;i<num;i++){
        if(tmp>arr[i]){
            tmp = arr[i];
        }
    }
    return tmp;
}
//sum of all the nums in the array
float summation(float arr[], int num){
    float sum=0;
    for (int i=0;i<num;i++){
        sum = sum+arr[i];
    }
    return sum;
}



int main(){
    float arr[16],tmp,gmean,high,low,sum;
    char c;
    int n;
    for(int i=0;i<15;i++){
        scanf("%f",&tmp);
        if(tmp<0){
            n=i;
            break;
        }
        arr[i]=tmp;
        n=15;
    }
    getchar();
    printf("Enter a character:");
    scanf("%c",&c);
    getchar();

    switch (c)
    {
    case 'm':
        gmean = geometric_mean(arr,n);
        printf("The geometric mean of the array is %f\n",gmean);
        break;

    case 'h':
        high = highest(arr,n);
        printf("Highest number is %f\n", high);
        break;
    
    case 'l':
        low=lowest(arr,n);
        printf("Lowest number is %f\n", low);
        break;

    case 's':
        sum = summation(arr,n);
        printf("Sum of the array is %f\n",sum);
        break;
    
    default:
        break;
    }

    return 0;
}