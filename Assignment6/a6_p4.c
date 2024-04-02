/*CH-230-A
a6 p4.[c or cpp or h]
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#define INTERMEDIATE

int main(){
    int n;
    int *vec1,*vec2;
    int scalar_prod=0;
    scanf("%d",&n);
    //memory allocating and data inputs for
    //two vectors
    vec1=(int*)malloc(n*sizeof(int));
    if(vec1==NULL){
        exit(1);
    } 
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&vec1[i]);
    }
    vec2=(int*)malloc(n*sizeof(int));
    if(vec2==NULL){
        exit(1);
    } 
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&vec2[i]);
    }
    //when intermediate is defined
    #ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    #endif
    for (int i = 0; i < n; i++)
    {
        //scalar product already calculated
        scalar_prod = scalar_prod+(vec1[i]*vec2[i]);
        #ifdef INTERMEDIATE
        printf("%d\n",vec1[i]*vec2[i]);
        #endif
    }
    printf("The scalar product is: %d\n",scalar_prod);

    //free memories
    free(vec1);
    free(vec2);

    return 0;
}