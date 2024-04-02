/*
CH-230-A
a3 p4.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>

int position(char str[], char c){
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx){
        //fixing the position of idx when g is found 
        if (str[idx]== c) idx +=1;  
    }
    
    return idx;
}

int main(){
    char line[80];
    while (1){
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line,'g'));
    }
}