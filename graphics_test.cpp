#include <stdio.h>
#include <math.h>
#include <cstdio>

void printMat(int arr[][3], int sizeI, int sizeJ);

    // Returns a pointer to a newly created 2d array the array2D has size [height x width]
int** create2DArray(unsigned height, unsigned width) {
    int** array2D = 0;
	array2D = new int*[height];

      for (int h = 0; h < height; h++) {
            array2D[h] = new int[width];
            for (int w = 0; w < width; w++) {
                  // fill in some initial values
                  // (filling in zeros would be more logic, but this is just for the example)
                  array2D[h][w] = w + width * h;
            }
      }
      return array2D;
}


void printMat( int arr[][3], int sizeI, int sizeJ) {
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

	int** arr = create2DArray(height,width);

	int newArr[][3] = {{0,0,0},{0,0,0},{0,0,0}};

	for(int i = 0; i < height; i++) {		//not sure why this is needed but...
		for(int j = 0; j < width; j++) {
			newArr[i][j]=arr[i][j];
		}
	}

	printMat(newArr,height,width);

	printf("\n");

	return 0;
}
