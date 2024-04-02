/*CH-230-A
a6 p3.[c or cpp or h]
Aung Tun
atun@jacobs-university.de
*/

#include<stdio.h>
#define MIN(a,b,c)(((a<b) & (a<c)) ?(a):((b<c)?(b):(c)))
#define MAX(a,b,c)(((a>b) & (a>c)) ?(a):((b>c)?(b):(c)))
#define MIDRANGE(a,b,c) (MIN(a,b,c)+MAX(a,b,c))/2.0

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("The mid-range is: %.6lf\n",MIDRANGE(a,b,c));
    return 0;
}