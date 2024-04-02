/*
CH-230-A
a5 p8.c
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

int **inputMatrix(int n,int m){
    int **matrix = NULL;
    //memory allocating dynamically
    matrix = (int**)malloc(n*sizeof(int*));
    if(matrix==NULL){
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        matrix[i]=(int*)malloc(m*sizeof(int));
        if(matrix[i]==NULL){
            exit(1);
        }
    }
    //getting inputs
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&(matrix[i][j]));
        }
        
    }
    return matrix;
    //free the memory
    for (int i = 0; i < n; i++)
    {
        free(matrix[i]);        
    }
    free(matrix);

    return 0;
}

void printMatrix(int** matrix,int n,int m){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
        
    }
}

int matrixMulti(int** matrix1, int** matrix2,int n,int m, int p){
    int **matrix = NULL;
    //memory allocating dynamically
    matrix = (int**)malloc(n*sizeof(int*));
    if(matrix==NULL){
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        matrix[i]=(int*)malloc(p*sizeof(int));
        if(matrix[i]==NULL){
            exit(1);
        }
    }
    //multiply the matrices
    for (int j = 0; j < m; j++)
    {
        for (int i= 0; i < n; i++)
        {
            for (int k = 0; k < p; k++)
            {
                matrix[i][k]=matrix[i][k]+(matrix1[i][j]*matrix2[i][j]);
            }
            
        }
        
    }
    return matrix;
    //free the memory
    for (int i = 0; i < n; i++)
    {
        free(matrix[i]);        
    }
    free(matrix);    
}

int main(){
    int n,m,p;
    int **matrix1;
    int **matrix2;
    int **multi;
    scanf("%d %d %d", &n,&m,&p);

    matrix1=inputMatrix(n,m);
    matrix2=inputMatrix(m,p);
    //for first matrix
    printf("Matrix A:\n");
    printMatrix(matrix1,n,m);
    //for second matrix
    printf("Matrix B:\n");
    printMatrix(matrix2,m,p);
    //multiply function
    multi=matrixMulti(matrix1,matrix2,n,m,p);
    printf("Result of multiplication\n");
    printMatrix(multi,n,p);
    
    return 0;
}
