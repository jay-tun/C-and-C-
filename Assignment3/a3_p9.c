/*
CH-230-A
a3 p9.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>

double sum25(double v[], int n);

int main(){
    int n;
    double v[20];
    double sum;
    scanf("%d", &n);

    for (int  i = 0; i < 20; i++){
         v[i]= -1;
         
    }
    
    for (int i=0;i<n;i++){
        scanf("%lf", &v[i]);
    }
    sum = sum25(v,n);
    if (sum != -111){//checks validity of the postion
        printf("sum=%lf\n",sum);
    }
    else{
        printf("One or both positions are invalid\n");
    }
    return 0;
}

//function to add the value of position of 2 and 5
double sum25(double v[], int n){              
    if ((v[2]==-1)|| (v[5]==-1)){
        return -111;                          
    }
    else{
        return (v[2]+v[5]);
        }
}