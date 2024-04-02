/*
CH-230-A
a4 p7.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void matrix_form(int matrix[30][30], int n){
    printf("The entered matrix is:\n");
    //printing in matrix form
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}

void underdiag(int matrix[30][30],int n){
    printf("Under the main diagonal:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //taking ints when they are below main diagonal
            if(i==j){
                for(int k=0;k<i;k++){
                    printf("%d ",matrix[i][k]);
                }
            }
        }
    }
    printf("\n");
}

int main(){
    int matrix[30][30];
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    //function calls
    matrix_form(matrix,n);
    underdiag(matrix,n);
    
    return 0;
}