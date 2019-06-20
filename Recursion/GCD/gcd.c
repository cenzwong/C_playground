#include <stdio.h>
#include <stdlib.h>

int gcd_recur(int A, int B);
int gcd(int A, int B);

int main(){
	int ans = gcd(1920,1080);
	printf("The Answer is: %i\n\n\n", ans);
	system("PAUSE");
	return 1;
}

int gcd_recur(int A, int B){
	if(A%B == 0){return B;}
	else{
		gcd_recur(B,A%B);
	}
}

int gcd(int A, int B){
	int Temp; 
	while(B!=0){
		Temp = A%B;
		A = B;
		B = Temp;		
	}
	return A;
	
	
}