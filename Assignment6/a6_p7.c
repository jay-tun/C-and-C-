/*CH-230-A
a6 p7.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#include<math.h>

unsigned char set3bits(unsigned char ch,int bit1,int bit2,int bit3){
    ch= ch|(int)pow(2,bit1);
    ch= ch|(int)pow(2,bit2);
    ch= ch|(int)pow(2,bit3);
    
    return ch;
}

void binary(unsigned char ch){
    for(int i=7;i>=0;i--){
        if((ch>>i)&1){
            printf("1");
        }
        else{
            printf("0");
        }
    
    }
    printf("\n");
}

int main(){
    unsigned char ch;
    int bit1,bit2,bit3;
    scanf("%c",&ch);
    printf("The decimal representation is: %d\n",ch);
    printf("The binary representation is: ");
    binary(ch);
    scanf("%d %d %d",&bit1,&bit2,&bit3);
    printf("After setting the bits: ");
    binary(set3bits(ch,bit1,bit2,bit3));
    return 0;
}