//calculate n!

#include <stdio.h>

int fact(int n);
int fact_recur(int n);

int main(){
	int ans = fact_recur(10);
	printf("%i \n",ans);
	return 0;
}

int fact(int n){
	int prod = 1;
	for(n;n > 0; n-- ){
		prod *= n;		
	}
	return prod;
}

int fact_recur(int n){
	if(n == 1){
		return result = 1;
	}else{
		return result = n * fact_recur(n-1);
	}
}