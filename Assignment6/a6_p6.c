/*CH-230-A
a6 p6.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>

int main(){
    unsigned char ch;
    int n;
    scanf("%c", &ch);
    printf("The decimal representation is: %d\n",ch);
    printf("The backwards binary representation is: ");
    for(int i=7;i>=0;i--){
        n=ch>>i;
        if(n&1){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    printf("\n");
    return 0;
}