#include<stdio.h>
int fact(int n);
int main()
{
int n,result;
printf("\nEnter the value of n::");
scanf("%d",&n);
result=fact(n);
printf("\nFactorial of %d = %d",n,result);
return 0;
}
int fact(int n){
if(n == 1 || n == 0)
 return 1;
else
return n*fact(n-1);
}
