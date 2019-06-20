#include <stdio.h>

int fib(int n);
int fib_recur(int n);

int main(){
	int ans = fib_recur(14);
	
	printf("%i",ans);
	
	return 0;
}

int fib(int n){
	if (n == 0){return 0;}
	if (n == 1){return 1;}
	if (n >= 2){
		//1,1,2,3
		//give up
		int a = 1;
		int b = 1;
		int sum = a+b;
	}
}

int fib_recur(int n){
	if (n == 0){return 0;}
	if (n == 1){return 1;}
	if (n >= 2){return fib_recur(n-1)+fib_recur(n-2);}
}