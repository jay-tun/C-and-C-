/*
CH-230-A
a6 p1.[c or cpp or h]
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#define SWAP(x,y,type) {type tmp=x;x=y;y=tmp;}

int main(){
    int a,b;
    double x,y;
    scanf("%d %d %lf %lf",&a,&b,&x,&y);
    SWAP(a,b,int);
    SWAP(x,y,double);

    printf("After swapping:\n");
    printf("%d\n%d\n%.6lf\n%.6lf\n",a,b,x,y);

    return 0;
//say my name say my name
//i am the god
}