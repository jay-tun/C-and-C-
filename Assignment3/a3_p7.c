/*
CH-230-A
a3 p7.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, int m, char c){
    //looping through n height
    for (int i=1; i<=n; i++){
        //staring with m width
        for(int j=1; j<=m; j++){
            printf("%c",c);
        }
        printf("\n");
        //incrementing m value to 
        //make the form of m+n-1
        m++;
    }
}

int main(){
    int n,m;
    char c;
    scanf("%d %d %c", &n, &m, &c);
    print_form(n,m,c);
    return 0;
}