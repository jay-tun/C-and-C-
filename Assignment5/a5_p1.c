/*
CH-230-A
a5 p1.c
Aung Tun
myemail@jacobs-university.de
*/

#include <stdio.h>

void triangleForm(int n, char ch){
    //start printing count of n and 
    //decrease from there
    for(int i=n;i>=1;i--){
        for(int j=0;j<i;j++){
            printf("%c",ch);
        }
        printf("\n");
    }
}

int main(){
    int n;
    char ch;
    scanf("%d %c", &n,&ch);

    triangleForm(n,ch);
    
    return 0;
}