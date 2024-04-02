/*
CH-230-A
a3 p8.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>

//sum function
float addition(float var[], int i){
    int sum = 0;
    for(int j=0;j<=i;j++){
        sum=sum+var[j];
    }
    return sum;
}
//average function
float average(float sum, int i){
    float avg= sum/i;
    return avg;
}

int main(){
    //arr for floats
    float var[11], sum,avg;
    int i = 0;
    float n = 0;
    while (i<10) //getting 10 inputs 
    {
        scanf("%f", &n);
        if(n == -99.0){
            //stops when value is -99
            break;
        }
        var[i] = n;
        i = i+1;
    }

    sum = addition(var, i);
    avg = average(sum, i);
    printf("Sum = %f\n", sum);
    printf("Average = %f\n", avg);
    return 0;    
}