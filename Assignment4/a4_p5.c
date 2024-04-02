/*
CH-230-A
a4 p5.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>

int count_consonants(char *str){
    int num=0;
    for(int i=0;i<strlen(str);i++){
        //with ptrs instead of value
        if(*(str+i)=='a'||*(str+i)=='e'||*(str+i)=='i'||
        *(str+i)=='o'||*(str+i)=='u'||*(str+i)=='A'||*(str+i)=='E'||
        *(str+i)=='I'||*(str+i)=='O'||*(str+i)=='U'){
        }
        //counting iff str[i] is consonant and a char 
        else if((*(str+i)>='a'&&*(str+i)<='z')||(*(str+i)>='A'&&*(str+i)<='Z')){
            num++;
        }
        
    }
    return num;
}

int main(){
    char str[100],tmp[100];
    for(int i=0;i<100;i++){
        fgets(str, sizeof(str),stdin);
        //in case input is newline
        if (strlen(str) == 1){
            break;
        }
        tmp[i] = count_consonants(str);
        printf("Number of consonants=%d\n",tmp[i]);
        
    }

    return 0;
}