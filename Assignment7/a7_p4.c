/*CH-230-A
a7_p4.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void uppercase(char str[100]){
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]>=97 && str[i]<=122)
        {
            printf("%c",toupper(str[i]));
        }
        else{
            printf("%c",str[i]);
        }
        
    }
    
}

void lowercase(char str[100]){
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]>=65 && str[i]<=90)
        {
            printf("%c",tolower(str[i]));
        }
        else{
            printf("%c",str[i]);
        }
        
    }
    
}

void uplowercase(char str[100])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]>=65 && str[i]<=90)
        {
            printf("%c",tolower(str[i]));
        }
        else if (str[i]>=97 && str[i]<=122)
        {
            printf("%c",toupper(str[i]));
        }
        else{
            printf("%c",str[i]);
        }
    }
    
}

void exitfunc(char str[100]){
    exit(1);
}

int main(){
    char str[100];
    int n=0;
    void (*ptrfunc[4])(char*);
    fgets(str,sizeof(str),stdin);
    ptrfunc[0]=uppercase;
    ptrfunc[1]=lowercase;
    ptrfunc[2]=uplowercase;
    ptrfunc[3]=exitfunc;
    while (1)
    {
        scanf("%d",&n);
        (ptrfunc[n-1])(str);
    }
      
    return 0;
}