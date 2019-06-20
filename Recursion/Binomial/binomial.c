#include <stdio.h>
#include <stdlib.h>

int binom_recur(int m, int n);
int binom(int m, int n);
int factorial(int n);

int main(){
	
	int ans = binom_recur(10,6);
	printf("%i\n\n\n", ans);
	system("PAUSE");
	return 1;
}

int binom(int m, int n){
	return 	factorial(m)/factorial(n)/factorial(m-n);
}

int factorial(int n){
	if(n == 1){return 1;}
	if(n >= 2){return n*factorial(n-1);}
}

int binom_recur(int m, int n){
		if(n == 0||n == m) return 1;
		
		return binom_recur(m-1,n) + binom_recur(m-1,n-1);
	
}