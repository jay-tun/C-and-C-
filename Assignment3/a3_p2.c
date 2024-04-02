/*
CH-230-A
a3 p1.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>

int main(){
    char ch;
    int n;
    scanf("%c", &ch);
    scanf("%d", &n);
    printf("%c,", ch);
    for(int i=1; i<=n; i++){ 
        printf("%c-%d,", ch, i);
    }
    
    return 0;
}