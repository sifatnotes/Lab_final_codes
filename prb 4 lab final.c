#include<stdio.h>
 
int main()
{
   int n,m,sum_total=0,reverse=0;
   printf("Enter a six digit number:");
   scanf("%d",&n);
 
   m=n%10;
 
   while(n>0){
       m=n%10;
       n=n/10;
       reverse=(reverse*10)+m;
       sum_total=sum_total+m;
   }
 
 
   printf("Sum of digits = %d\n",sum_total);
   printf("Reverse of the number = %d\n",reverse);
 
   return 0;
}
