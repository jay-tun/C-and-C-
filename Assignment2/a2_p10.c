/*
CH-230-A
a2 p10.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int n, i=0;
    scanf("%d", &n);
    while(i!=n){
        if(n>=1){
            //conversion table for 1 to n days to hrs
            i++;
            printf("%d day = %d hours\n", i, i*24);

        }
        else{
            //in case input is invalid
            printf("Input should be positive and non-zero\n");
            scanf("%d", &n);
        }
    }
    return 0;
}