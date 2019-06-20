#include <stdio.h>
#include <stdlib.h>

#define NUM 5
void EnCQueue(int);
int DeCQueue(void);
void PrintCQueue(void);

typedef struct cqueue{
	int CQueue[NUM];
	int Rear;
	int Front;
} Queue_t;

Queue_t cqu;

int main(void){
	
	int op = 0, item;
	cqu.Rear = 0;
	cqu.Front = 0;
	
	printf("====cqueue demo=======\n\n\n");
	
	while(1){
		printf("======================\n");
		printf("=1. Add===============\n");
		printf("=2. Del===============\n");
		printf("=3. Print=============\n");
		printf("=4. Exit==============\n");
		printf("======================\n");
		printf("Please input: ");
		
		scanf("%d", &op);
		switch(op){
			case 1: 
				printf("Please input what you add: ");
				scanf("%d", &item);
				EnCQueue(item);
			break;
			
			case 2:
				item = DeCQueue();
				if(item != -1)
					printf("%d is what you delete \n", item);
			break;
			
			case 3:
				PrintCQueue();
			break;
			
			case 4:
				printf("\n");
			return 0;
			
		}
		
	}
	system("pause");
	return 0;
}

void EnCQueue(int item){
	cqu.Rear = (cqu.Rear + 1) % NUM; //add one
	
	if(cqu.Rear% NUM == cqu.Front){
		printf("The CQueue is FULL!!!!\n");
		system("pause");
		exit(1);;
	}else{
		cqu.CQueue[cqu.Rear] = item;
	}
}

int DeCQueue(void){
	if(cqu.Front == cqu.Rear){
		printf("The CQueue is Empty!!!\n");
		system("pause");
		exit(1);
	}else{
		cqu.Front = (cqu.Front+1)%NUM;
		return cqu.CQueue[cqu.Front];
	}
}

void PrintCQueue(void){
	int i;
	printf("Current CQueue: ");
	for( i = cqu.Rear; i != cqu.Front; i = (i+NUM-1) %NUM){
		printf("%d ", cqu.CQueue[i]);
	}
	printf("\n");
}