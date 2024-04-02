/*
CH-230-A
a4 p11.c
Aung Tun
atun@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int count_insensitive(char *str, char c){
    int count=0;
    //walking throught the string and incrementing 
    //the char
    for(int i=0;i<strlen(str);i++){
        if(tolower(c)==tolower(*(str+i))){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    char *str;
    char *tmp = malloc(sizeof(char) *50);
    if(tmp ==NULL){
        exit(1);
    }
    fgets(tmp,50,stdin);
    n = strlen(tmp);
    str = (char*)malloc(sizeof(char)*n);
    if(str==NULL){
        exit(1);
    }
    strcpy(str,tmp);
    //deallocate the first string
    free(tmp);
    printf("The character 'b' occurs %d times.\n", count_insensitive(str,'b'));
    printf("The character 'H' occurs %d times.\n", count_insensitive(str,'H'));
    printf("The character '8' occurs %d times.\n", count_insensitive(str,'8'));
    printf("The character 'u' occurs %d times.\n", count_insensitive(str,'u'));
    printf("The character '$' occurs %d times.\n", count_insensitive(str,'$'));
    //free the second string
    free(str);
    return 0;

}
