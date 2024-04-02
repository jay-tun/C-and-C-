/*
CH-230-A
a4 p2.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main(){
    char s[50];
    fgets(s, sizeof(s), stdin);
    for(int i=0; i<strlen(s)-1; i++){
        //when index is divisible by 2
        if (i%2==0)
        {
            printf("%c\n",s[i]);
        }
        else{
            //indent one space when it's not
            printf(" %c\n",s[i]);
        }
        
    }
    return 0;
}


