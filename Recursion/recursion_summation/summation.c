#include <stdio.h>

//summation

int summation(int n);
int summation_recu(int n);

int main(){
	int ans = summation_recu(12);
	printf("%i\n",ans);
	return 1;
}

int summation(int n){
	int sum = 0;
	for(n; n >  0; n--){
		sum += n;
	}
	return sum;
}

int summation_recu(int n){
	int sum = 1;
	if(n == 1){
		return sum;
	}else{
		sum = n + summation_recu(n-1);
	} 
}