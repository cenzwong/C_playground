#include <stdio.h>
#include <stdlib.h>

#define MaxNum 5

int Stack[MaxNum];
int Top = -1;
void Push(int);
int Pop(void);
void PrintStack(void);


int main(void){
	int op = 0, item;
	
	printf("=======Stack Program========\n");
	
	while(1){
		printf("============================\n");
		printf("=  1.Push===================\n");
		printf("=  2.Pop====================\n");
		printf("=  3.ShowStack==============\n");
		printf("=  4.Exit===================\n");
		printf("============================\n");
		
		printf("Please enter your command: ");
		scanf("%d", &op);
		switch(op){
			case 1: 
				printf("Please input your data: ");
				scanf("%d", &item);
				Push(item);
				break;
			case 2:
				printf("%d is pop from data \n", Pop());
				break;
			case 3:
				PrintStack();
				break;
			case 4:
				printf("\n");
				return 0;
		}
		
	}
	
	
	
	system("pause");
	return 0;
}

void Push(int item){
	if(Top == MaxNum - 1)
		printf("The Stack is FULL");
	else 
		Stack[++Top] = item;
}

int Pop(void){
	if(Top == -1)
		printf("The Stack is EMPTY!");
	else
		return Stack[Top--];
}

void PrintStack(void){
	int i;
	if(Top == -1)
		printf("The Stack is EMPTY! \n");
	else{
		printf("The Current Data is: ");
		for(i = Top; i >= 0; i--)
			printf("%d ", Stack[i]);
		printf("\n");
	}
}