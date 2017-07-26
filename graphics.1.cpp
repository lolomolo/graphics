#include <stdio.h>
#include <math.h>

struct vec3 {
	int vec[3];
} v;

struct s3Mat {
	int arr[3][3];
} a, b;

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
			a.arr[i][j]=i+j;
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

s3Mat matMult(struct s3Mat a, struct s3Mat b) {
	s3Mat c;

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			for(int k = 0; k < 3; k++) {
                c.arr[i][j] += a.arr[i][k] * b.arr[k][j];
			}
		}
	} 
	return c;
}

int main() {
	int height = 3;
	int width = 3;

	a = matInit(a);
	b = matInit(b);

	s3Mat s = matMult(a,b);
	
	printMat(a, height, width);
	printf("\n"); 
	printMat(s, height, width);
	printf("\n");
	
	return 0;
}
