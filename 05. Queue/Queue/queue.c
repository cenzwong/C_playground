#include <stdio.h>
#include <stdlib.h>

#define NUM 10
void EnQueue(int);
int DeQueue(void);
void PrintQueue(void);

typedef struct queue {
	int Q[NUM];
	int rear;
	int front;	
} Queue;

Queue qu;

int main(){
	
	int op = 0, item;
	qu.rear = -1;
	qu.front = -1;
	
	printf("========Queue Program======");
	
	while(1){
		printf("=============================\n");
		printf("=\t1. EnQueue(Add)\t=\n");
		printf("=\t2. DeQueue(Del)\t=\n");
		printf("=\t3. PrtQueue(Print)\t=\n");
		printf("=\t4. End\t=\n");
		printf("Enter your Operation:\t\n");
		
		scanf("%d", &op);
		switch(op){
			case 1: 
				printf("Enter what you wanna Add:");
				scanf("%d", &item);
				EnQueue(item);
				break;
				
			case 2: 
				item = DeQueue();
				if(item != -1)
					printf("%d is deleted from the queue\n", item);
				break;
			
			case 3:
				PrintQueue();
				break;
			case 4:
				printf("\n");
				return 0;
		}
		
	}
	
	system("PAUSE");
	return 1;
}


void EnQueue(int item){
	if(qu.rear == NUM-1){
		//The Queue is Full
		printf("The Queue is Full! \n");
		return;
	}else{
		qu.Q[++qu.rear] = item;
	}
}

int DeQueue(void){
	if(qu.front == qu.rear){
		printf(" The Queue is Empty!\n");
		return -1;
	}else{
		return qu.Q[++qu.front];
	}
}

void PrintQueue(void){
	int i;
	printf("Current Queue:");
	for( i = qu.rear; i >= qu.front + 1; i--)
		printf("%d ", qu.Q[i]);
	printf("\n");
}