#include<stdio.h>
void main()
{
int i,j,fact=1;
printf ("enter number :");
scanf("%d",&j);
for(i=1;i<=j;i++){
    fact=fact*i;}
printf("%d factorial is:%d",j,fact);   
    }