#include <stdio.h>
#include <math.h>

struct s3Mat {
	int arr[3][3];
} a;

void printMat( int arr[][3], int sizeI, int sizeJ);

int view[2][3] = {{0,0,0},{0,1,0}}; //viewing from (1,1,0) in the direction of (2,2,0) 
int viewAngle = 180; //degrees
int line1[2][3] = {{1,1,0},{1,1,1}};
int resMat[3][3];


int matMult(int a[][3], int b[][3], int sizeI, int sizeJ) {
	//int resMat[sizeI][sizeJ]; //resultant matrix from a and b multiplication

	for(int i = 0; i < sizeI; i++) {
		for(int j = 0; j < sizeJ; j++) {
			for(int k = 0; k < sizeI; k++) {
                resMat[i][j] += a[i][k] * b[k][j];
			}
		}
	} 
	return 0;
}

int proj(int v[], int p[]) {	//project p onto v, return prjection vector
	int projVec;
	return projVec;
}

void printMat(struct s3Mat a, int sizeI, int sizeJ) {
	for(int i = 0; i < sizeI; i++) {
		for(int j = 0; j < sizeJ; j++) {
			
			printf("%d", a.arr[i][j]);
			printf(" ");
		}
		printf("\n"); 
	}
}

s3Mat arrInit(struct s3Mat a) {
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			a.arr[i][j]=i+2*j;
		}
	}
	return a;
}

int main() {
	int height = 3;
	int width = 3;

	a = arrInit(a);

	printMat(a, height, width);
	
	return 0;
}
