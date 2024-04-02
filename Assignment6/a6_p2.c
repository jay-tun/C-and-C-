/*CH-230-A
a6 p1.[c or cpp or h]
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#define LEASTSIGBIT(x)(x&1) ==0?0:1

int main(){
    char c;
    scanf("%c", &c);
    printf("The decimal representation is: %d\n",c);
    printf("The least significant bit is: %d\n",LEASTSIGBIT(c));
    
    return 0;
}