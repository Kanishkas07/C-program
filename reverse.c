#include<stdio.h>
void main()
{
int num,org,rem,rev=0;
printf("number");
scanf("%d",&num);
org=num;
while(num!=0){
rem=num%10;
rev=(rev*10)+rem;
num/=10;
}
printf("The reverse of %d is %d",org,rev);
}