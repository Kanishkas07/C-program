#include <stdio.h>
void main()
{int max,min,n, num,i;
printf(" Enter the no of numbers to be entered:");
scanf("%d",&n);
printf(" Enter the number:");
scanf("%d",&num);
max=num; 
min=num;
for(i=2;i<=n;i++){
printf("Enter a number: ");
scanf("%d", &num);
if (max<num)
max=num;
if(min>num)
min=num;
}
printf("%d",max-min);}