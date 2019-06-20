#include <stdio.h>
#include <stdlib.h>

void matrix_traverse(int m, int n, int A[m][n]);


int main(){
	
	int A[2][3] = {{1,2,3},{4,5,6}};
	matrix_traverse( 2, 3, A );
	
	system("PAUSE");
	
	return 0;
}

void matrix_traverse(int m, int n, int A[m][n]){
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	
}

//A--> B
void matrix_transpose(int m, int n, int A[m][n], int B[n][m]){
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			B[j][i] = A[i][j];
		}
		
	}
	
}

//C = A + B
void matrix_Add(int m, int n, int A[m][n], int C[m][n]){
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}

//C = A*B
void matrix_Mul(int m, int n, int p, int A[m][n], int B[n][p], int C[m][p]){
	int i, j, k;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			C[i][j] = 0;
			for(k = 0; k < n; k++){
				C[i][k] = C[i][j] + A[i][k] * B[k][j];
			}
		}
	}
}

//compress_Sparse Matrix
/*
	5	0	0
	0	0	-1
	3	0	0
	0	9	10
to
	4	3	5		//4col, 3col, 5data
	0	0	5
	1	2	-1
	2	0	3
	3	1	9
	3	2	10

*/
void Compress_process(int m, int n, int Sparse[m][n], int Compress[m][n]){
	int i, j, k;
	k = 1;
	Compress[0][0] = m;
	Compress[0][1] = n;
	Compress[0][2] = 5;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			if(Sparse[i][j] != 0){
				Compress[k][0] = i;
				Compress[k][1] = j;
				Compress[k][2] = Sparse[i][j];
				k++;
			}
		}
	}
}