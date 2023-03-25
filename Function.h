#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int i, j, n;
 void read (double **mas, int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%lf", &mas[i][j]);
		}
	}
}
 void printlnes (double **res, int n){
	for(int i = 0; i < n*n; i++){
		for(int j = 0; j < n; j++){
			printf("%.3g\t  ", res[i][j]);
		}
		printf("\n");
	}
}
 double** plus(double **mas, double **mas2, int n){
	double **res = (double**) malloc(n * sizeof(double*));
    for(i = 0; i < n; i++)
        res[i] = (double*)malloc(n * sizeof(double*));
    for(i = 0; i < n; i++){
    	for(j = 0; j < n; j++){
    		res[i][j] = mas[i][j] + mas2[i][j];
		}
	}
	return res;
}

 double** minus (double **mas, double **mas2, int n){
	double **res = (double**) malloc(n * sizeof(double*));
    for(i = 0; i < n; i++)
        res[i] = (double*)malloc(n * sizeof(double*));
    for(i = 0; i < n; i++){
    	for(j = 0; j < n; j++){
    		res[i][j] = mas[i][j] - mas2[i][j];
		}
	}
	return res;
}

 double** umnog (double **mas, double **mas2, int n){
	double **res = (double**) malloc(n * sizeof(double*));
    for(i = 0; i < n; i++)
        res[i] = (double*)malloc(n * sizeof(double*));
    for (i = 0; i < n; i++){
    	for(j = 0; j < n; j++){
    		for(int k = 0; k < n; k++){
    			res[i][j] += mas[i][k] * mas2[k][j];
			}
		}
	}
	return res;
}
