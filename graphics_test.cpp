#include <stdio.h>
#include <math.h>
#include <cstdio>

void printMat(int arr[][3], int sizeI, int sizeJ);

struct s3Mat {
	int arr[3][3];
} a;

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

	//printf("\n");

	return 0;
}
