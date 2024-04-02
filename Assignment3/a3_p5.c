/*
CH-230-A
a3 p5.c
Aung Tun
atun@jacobs-university.de
*/

#include <stdio.h>

int main(){
    char c;
    int n;
    double temarr[100], sum, fahrenheit, avg;
    scanf("%c", &c);
    getchar();
    scanf("%d", &n);
    for (int i=0; i<n;i++){
        scanf("%lf", &temarr[i]);
        //calculating sum of temps
        sum = sum + temarr[i];
    }
    switch (c)
    {
    case 's':
        printf("sum of temperatures: %lf\n", sum);
        break;
    case 'p':
        for (int i=0;i<n; i++){
            printf("Temperature of position %d is %lf\n",i,temarr[i]);
        }
        break;
    case 't':
        for (int i=0;i<n; i++){
            //converting to fahrenheit
            fahrenheit = (9.0/5.0)*temarr[i] + 32.0;
            printf("Temperature in fahrenheit of position %d is %lf\n",i,fahrenheit);
        }
        break;
    default:
        avg = sum/n;
        printf("The average is of all temperatures is %lf\n",avg);
        break;
    }
    return 0;
}