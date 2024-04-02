/*
CH-230-A
a5 p5.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

double scalar_product(double *v, double *w, int n){
    double product;
    for(int i=0;i<n;i++){
        product = product+(*(v+i)**(w+i));
    }
    return product;
}

void small_large(double *v, int n){
    double v_min = v[0];
    int vmin_pos,vmax_pos=0;
    //finding the smallest and position of v
    for (int i = 0; i < n; i++){
        if(v_min>v[i]){
            v_min = v[i];
            vmin_pos = i;
        }
    }
    printf("The smallest = %lf\n",v_min);
    printf("Position of smallest = %d\n", vmin_pos);
    double v_max = v[0];
    //finding the largeest and position of w
    for (int i = 0; i < n; i++){
        if(v_max<v[i]){
            v_max = v[i];
            vmax_pos = i;
        }
    }
    printf("The largest = %lf\n",v_max);
    printf("Position of largest = %d\n", vmax_pos);

}


int main(){
    int n;
    double *v,*w;
    scanf("%d",&n);
    //allocate memory
    v = (double*)malloc(sizeof(double)*n);
    w = (double*)malloc(sizeof(double)*n);
    //for vector v
    for(int i=0;i<n;i++){
        scanf("%lf",(v+i));
    }
    //for vector w
    for(int i=0;i<n;i++){
        scanf("%lf",(w+i));
    }
    printf("Scalar product=%lf\n",scalar_product(v,w,n));
    small_large(v,n);
    small_large(w,n);
    //release memory for both vectors
    free(v);
    free(w);

    return 0;
}