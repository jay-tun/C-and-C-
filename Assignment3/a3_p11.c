/*
CH-230-A
a3 p11.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main(){
    char one[100], two[100], three[100],c;
    char tmp[100];
    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin);
    scanf("%c", &c);
    getchar();

    //replacing newline char with null char
    for(int i=0;i<strlen(one); i++){
        if(one[i]=='\n'){
            one[i] ='\0';
        }
    }
    //same for string two
    for(int i=0;i<strlen(two); i++){
        if(two[i]=='\n'){
            two[i] ='\0';
        }
    }
       

    printf("length1=%lu\n",strlen(one));
    printf("length2=%lu\n",strlen(two));
    //to avoid problems later on
    strcpy(tmp,one);
    //concatenating
    printf("concatenation=%s\n", strcat(tmp,two));
    strcpy(three, two);
    printf("copy=%s\n", three);
    //comparing one and two
    if(strcmp(one,two)==0){
        printf("one is equal to two\n");
    }
    else if(strcmp(one, two)>0){
        printf("one is larger than two\n");
    }
    else{
        printf("one is smaller than two\n");
    }
    //finding c in two
    int bool =0;
    for(int i=0;i<=strlen(two);i++){
        if(two[i] == c){
            printf("position=%d\n",i);
            bool = 1;
            break;
        }
    }
    if(bool==0){
        printf("The character is not in the string\n");
    }

    return 0;
}