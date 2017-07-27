#include <stdio.h>
#include <math.h>


struct vec3 {
	double vec[3];
	int vecLength;

	void Init(int l, double a, double b, double c) {
		vecLength = l;
		vec[0] = a;
		vec[1] = b;
		vec[2] = c;
	}
	
	vec3 Normalize() {
		vec3 retVec;
		retVec.Init(3,0,0,0);
		 double length = GetLength();
		 for(int i = 0; i < vecLength; i++) {
			 retVec.vec[i] = vec[i]/length;
		 }
		 return retVec;
	}

	void Print() {
		for(int i = 0; i < vecLength; i++) {
		printf("%f", vec[i]);
		printf(" ");
	}
	printf("\n"); 
	}

	double GetLength() {
		double ret = 0;
		for(int i = 0; i < vecLength; i++) {
			ret += vec[i]*vec[i];
		}
		return (sqrt(ret));
	}
} v;

struct line {
	double pS[3];
	double pE[3];
	int lineLength;

	void Init(int l, double a1, double b1, double c1, double a2, double b2, double c2) {
		lineLength = l;
		pS[0] = a1;
		pS[1] = b1;
		pS[2] = c1;

		pE[0] = a2;
		pE[1] = b2;
		pE[2] = c2;
	}

	void Print() {
		for(int i = 0; i < 3; i++) {
			printf("%f", pS[i]);
			printf(" ");
		}
		printf(" ");
		for(int j = 0; j < 3; j++) {
			printf("%f", pE[j]);
			printf(" ");
		}
		printf("\n");
	}

	double GetLength() {
		vec3 temp;
		double ret = 0;
		for(int i = 0; i < 3; i++) {
			temp.vec[i] = pE[i] - pS[i];	//turn line into vec that origionates at the origin
		}
		ret=temp.GetLength();
		return(sqrt(ret));
	}

	vec3 Vectorize() {
		vec3 retVec;
		retVec.Init(3,0,0,0);
		for(int i = 0; i < lineLength; i++) {
			retVec.vec[i] = pE[i] - pS[i];
		}
		return retVec;
	}
} l;

/*
struct s3Mat {
	int arr[3][3];
} a, b;

void printMat(s3Mat a, int sizeI, int sizeJ) {
	for(int i = 0; i < sizeI; i++) {
		for(int j = 0; j < sizeJ; j++) {
			
			printf("%d", a.arr[i][j]);
			printf(" ");
		}
		printf("\n"); 
	}
}

s3Mat matInit(s3Mat a) {
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			a.arr[i][j]=i+j;
		}
	}
	return a;
}

vec3 vecInit(vec3 v) {
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
*/
vec proj(line p, line v) {	//project p onto v, return prjection vector
	if(p.pS!=v.pS) { }  //make some error shit if the starting point of the two lines are different
	vec3 pVec;
	vec3 vVec;
	pVec = p.Vectorize();
	vVec = v.Vectorize();
	pVec.Print();
	line retLine;
	retLine = lineInit(retLine);

}


int main() {
	int height = 3;
	int width = 3;

/*
	a = matInit(a);
	b = matInit(b);

	s3Mat s = matMult(a,b);
	
	printMat(a, height, width);
	printf("\n"); 
	printMat(s, height, width);
	printf("\n");
*/

	v.Init(3,3,4,5);
	printf("v: \n");
	v.Print();
	printf("the length of v: %f \n", v.GetLength());

	vec3 tempV;
	tempV = v.Normalize();
	printf("tempV: \n");
	tempV.Print();
	printf("the length of tempV: %f \n", tempV.GetLength());

	l.Init(3,0,1,2,0,2,3);

	l.Print();



	
	printf("\n");

	return 0;
}
