/*
CH-230-A
a4 p10.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

//function to compute by reference
void proddivpowinv(float a, float b, float *prod, float *div,
    float *pwr, float *invb){
        *prod = a*b;
        *div = a/b;
        *pwr = powf(a,b);
        *invb = 1.0/b;
}

int main(){
    float a,b,product,division,power,inverse;
    float *prod,*div,*pwr,*invb;
    scanf("%f %f", &a,&b);
    prod = &product;
    div = &division;
    pwr = &power;
    invb = &inverse;
    //testing the function
    proddivpowinv(a,b,prod,div,pwr,invb);
    printf("Product of two floats is %f\n", product);
    printf("Division of a by b is %f\n", division);
    printf("Power of a to b is %f\n", power);
    printf("Inverse of b is %f\n", inverse);

    return 0;
}