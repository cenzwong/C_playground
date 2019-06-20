#include <stdio.h>
#include <stdlib.h>

#define N 10
char Stack[N];

int Top = -1;	//init the Top as -1 --> EMPTY
void Push(char item);
char Pop();

int main(){
	int ans = gcd(1920,1080);
	printf("The Answer is: %i\n\n\n", ans);
	
	system("PAUSE");
	return 1;
}

void Push(char item){
	if(Top == N-1){
		printf("Stack Is Full");
	}else{
		//Top = Top +1;
		//Stack[Top] = item;
		Stack[++Top] = item;
	}
}

char Pop(){
	if(Top == -1){
		printf("Stack Is Empty");
	}else{
		//item = Stack[Top];
		//Top = Top - 1;
		//return item;
		return(Stack[Top--]);
	}
}