/*CH-230-A
a6 p5.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>

int main(){
    unsigned char ch;
    int n=0;
    scanf("%c", &ch);
    printf("The decimal representation is: %d\n",ch);
    printf("The backwards binary representation is: ");
    while ((1<<n)<=ch)
    {
        if((ch >> n)&1){
            printf("1");
        }
        else{
            printf("0");
        }
        n++;
    }
    printf("\n");
    return 0;
}