/*
CH-230-A
a4 p12.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void replaceAll(char *str,char c, char e){
    char tmp[80];
    strcpy(tmp,str);
    //replacing the char
    for(int i=0;i<strlen(str);i++){
        if(*(str+i)==c){
            *(str+i)=e;
        }
    }
    printf("Character to be replaced is %c\n",c);
    printf("Replacing character is %c\n",e);
    printf("String BEFORE replacement: %s\n",tmp);
    printf("String AFTER replacement: %s\n",str);
}

int main(){
    char str[80],c,e;
    while (1){
        fgets(str,80,stdin);
        //gets inputs unless stop is entered
        if(strcmp(str,"stop\n")==0){
            break;
        }
        printf("Character to be replaced: ");
        scanf("%c",&c);
        getchar();
        printf("Replacing character: ");
        scanf("%c",&e);  
        getchar();
        replaceAll(str,c,e);
    }
       
    return 0;
}