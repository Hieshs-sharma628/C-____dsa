#include<stdio.h>
int fib[20],n;
void fibnoci();	
int main(){
	printf("\nEnter the number of terms to print in Fibonacci series::");
	scanf("%d",&n);
	fibnoci();
	printf("\nFibonacci series is::\n");
	for(int i=0;i<n;i++){
		printf("%d\n",fib[i]);
	}
	return 0;
}
void fibnoci(){
	fib[0]=0;
	fib[1]=1;
	for(int i=2;i<n;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
}