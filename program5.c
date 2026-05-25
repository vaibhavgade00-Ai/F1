
/*

Algorithm
START  
     Accept first number as No1
     Accept second number as No2
     perfrom Addition of No1 & No2
     Display the result 

STOP     
*/
#include<stdio.h>

int main()
{
    float i,j,k;
    printf("Enter first number :");
    scanf("%f",&i);

    printf("Enter second number:");
    scanf("%f",&j);

    k = i + j;

    printf("Addition is :%f",k);
    return 0;
}