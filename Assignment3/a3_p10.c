/*
CH-230-A
a3 p10.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>

//prototypes
float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);

int main(){
    float a, b,*p, *ptra, *ptrb;
    float ptrfunc=0;
    
    scanf("%f %f", &a,&b);
    //print from value function
    printf("Product from the first function: %f\n",product(a,b));
    
    p = &ptrfunc;
    productbyref(a,b,p);
    //print from reference function
    printf("Product from second function: %f\n", *p);

    ptra = &a;
    ptrb = &b;
    modifybyref(ptra, ptrb);
    printf("Different result of a is %f and b is %f\n", *ptra, *ptrb);

    return 0;
}
float product(float a, float b){
    return a*b;
}

void productbyref(float a, float b, float *p){
    *p = a*b;
}

void modifybyref(float *a, float *b){
    *a = *a + 3;
    *b = *b + 11;
}

