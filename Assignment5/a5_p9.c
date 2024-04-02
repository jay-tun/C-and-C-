/*
CH-230-A
a5 p9.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int ***input3D(int row, int column, int depth){
    int ***matrix =NULL;
    //dynamically memory allocating for 3d arr
    matrix=(int***)malloc(row*sizeof(int**));
    if(matrix==NULL){
        exit(1);
    }
    for(int i=0;i<row;i++){
        matrix[i]=(int**)malloc(column*sizeof(int*));
        if(matrix[i]==NULL){
            exit(1);
        }
        for(int j=0;j<column;j++){
            matrix[i][j]=(int*)malloc(depth*sizeof(int));
            if(matrix[i][j]==NULL){
                exit(1);
            }
        }
    }
    //taking inputs
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            for (int k = 0; k < depth; k++)
            {
                scanf("%d",&(matrix[i][j][k]));
            }
            
        }
        
    }
    
    return matrix;
    //deallocating
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            free(matrix[i][j]);
        }
        free(matrix[i]);
        
    }
    free(matrix);
    
}
//print the 3d array
void print3D(int*** matrix, int row,int column,int depth){
    for (int k = 0; k < depth; k++)
    {
        printf("Section %d:\n",k+1);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                printf("%d ",matrix[i][j][k]);
            }
            printf("\n");
        }
        
    }
    
}

int main(){
    int row,column,depth;
    int ***matrix;
    scanf("%d %d %d",&row,&column,&depth);
    matrix=input3D(row,column,depth);
    print3D(matrix,row,column,depth);
    return 0;
}