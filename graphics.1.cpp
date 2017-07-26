#include <stdio.h>
#include <math.h>

struct vec3 {
	int vec[3];
} v;

struct s3Mat {
	int arr[3][3];
} a;

int view[2][3] = {{0,0,0},{0,1,0}}; //viewing from (1,1,0) in the direction of (2,2,0) 
int viewAngle = 180; //degrees
int line1[2][3] = {{1,1,0},{1,1,1}};
int resMat[3][3];


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

void printVec(struct vec3 v, int sizeI) {
	for(int i = 0; i < sizeI; i++) {
		printf("%d", v.vec[i]);
		printf(" ");
	}
	printf("\n"); 
}

s3Mat matInit(struct s3Mat a) {
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			a.arr[i][j]=i+2*j;
		}
	}
	return a;
}

vec3 vecInit(struct vec3 v) {
	for(int i = 0; i < 3; i++) {
		v.vec[i]=i;
	}
	return v;
}


int main() {
	int height = 3;
	int width = 3;

	a = matInit(a);
	v = vecInit(v);

	printMat(a, height, width);
	printf("\n"); 
	printVec(v, height);
	
	return 0;
}
