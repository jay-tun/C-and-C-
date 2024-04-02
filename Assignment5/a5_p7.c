/*
CH-230-A
a5 p7.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char first[100],second[100];
    char *result;
    fgets(first,sizeof(first),stdin);
    fgets(second,sizeof(second),stdin);
    
    //remove the newline from first string
    for(int i=0;i<strlen(first);i++){
        if(first[i]=='\n'){
            first[i]='\0';
        }
    }

    strcat(first,second);
    result = (char*)malloc(sizeof(char)*strlen(first));
    if(result ==NULL){
        exit(1);
    }
    strcpy(result,first);
    printf("Result of concatenation: %s", result);
    free(result);
    
    return 0;
    
}

