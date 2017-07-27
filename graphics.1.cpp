#include <stdio.h>
#include <math.h>


struct vec3 {
	double vec[3];

	void Init() {
	for(int i = 0; i < 3; i++) {
		vec[i]=i;
		}
	}
	
	vec3 Normalize() {
		vec3 retVec;
		retVec.Init();
		 double length = GetLength();
		 for(int i = 0; i < 3; i++) {
			 retVec.vec[i] /= length;
		 }
		 return retVec;
	}

	void Print() {
		for(int i = 0; i < 3; i++) {
		printf("%f", vec[i]);
		printf(" ");
	}
	printf("\n"); 
	}

	double GetLength() {
		double ret = 0;
		for(int i = 0; i < 3; i++) {
			ret += vec[i]*vec[i];
		}
		return (sqrt(ret));
	}
} v;

struct line {
	int pS[3];
	int pE[3];

	double GetLength() {
		vec3 temp;
		double ret = 0;
		for(int i = 0; i < 3; i++) {
			temp.vec[i] = pE[i] - pS[i];	//turn line into vec that origionates at the origin
		}
		ret=temp.GetLength();
		return(sqrt(ret));
	}
} l;

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

void printLine(line l, int length) {
	for(int i = 0; i < length; i++) {
		printf("%d", l.pS[i]);
		printf(" ");
	}
	printf(" ");
	for(int j = 0; j < length; j++) {
		printf("%d", l.pE[j]);
		printf(" ");
	}
	printf("\n"); 
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

line lineInit(line l) {
	for(int i = 0; i < 3; i++) {
		l.pS[i]=i;
	}
	for(int j = 0; j < 3; j++) {
		l.pE[j]=j+3;
	}
	return l;
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
/*
line proj(line p, line v) {	//project p onto v, return prjection vector
	//if(p.pS!=v.pS) { }  //make some error shit if the starting point of the two lines are different
	line retLine;
	retLine = lineInit(retLine);

}
*/

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

	v = vecInit(v);
	printf("v: \n");
	v.Print();


	vec3 tempV;
	printf("call normalize on v: \n");
	tempV = v.Normalize();
	printf("tempV: \n");
	tempV.Print();
/*
	l = lineInit(l);

	printLine(l,3);


	printf("%f", l.GetLength());
	*/
	printf("\n");

	return 0;
}
