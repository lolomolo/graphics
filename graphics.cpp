#include <stdio.h>
#include <math.h>

#define PI 3.14159265

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

void printMat( int *arr[3], int sizeI, int sizeJ) {
	int tempSum;

	for(int i = 0; i < sizeI; i++) {
		for(int j = 0; j < sizeJ; j++) {
			
			printf("%d", arr[i][j]);
			printf(" ");
		}
		printf("\n"); 
	}
}

int main() {

	int height = 3;
	int width = 3;

	a = arrInit(a);

	printMat(a, height, width);
	
	return 0;
}
