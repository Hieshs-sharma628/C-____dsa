#include<stdio.h>
int fib[20],n;
int fibnoci(int n);	
int main(){
	printf("\nEnter the number of terms to print in Fibonacci series::");
	scanf("%d",&n);
	fibnoci(n);
	printf("\nFibonacci series is::\n");
	for(int i=0;i<n;i++){
		printf("%d\n",fib[i]);
	}
	return 0;
}
int fibnoci(int n){
	if(n==0 || n==1)
		return n;
	else 
		return (fibnoci(n+1)+fibnoci(n+2));
}