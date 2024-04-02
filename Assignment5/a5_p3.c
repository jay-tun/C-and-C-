/*
CH-230-A
a5 p3.c
Aung Tun
myemail@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>

int count_lower(char *str){
    int count=0;
    for(int i=0;i<strlen(str);i++){
        //walking through the string using ptrs
        if((*(str+i)>='a')&&(*(str+i)<='z')){
            count++;
        }        
    }
    return count;
}

int main(){
    char str[50],tmp[50];
    for(int i=0;i<50;i++){
        printf("Your input string:\n");
        fgets(str, sizeof(str),stdin);
        //in case input is newline
        if (strlen(str) == 1){
            break;
        }
        tmp[i]=count_lower(str);
        printf("Number of lower case:%d\n",tmp[i]);
    }
    
    return 0;
}

