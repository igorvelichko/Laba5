#include <stdio.h>
#include <stdlib.h>
#include "Function.h"
#include <malloc.h>

int main(int argc, char *argv[]) {
	int n, i;
    char z;
    double **mas, **mas2, **res;
    
    printf("Enter size matric : \n");
    scanf("%d", &n);
    
    printf("Enter numbers in first mas: \n");
	mas = (double**) malloc (sizeof (double*) *n);
    for (int i = 0; i < n; i++)
        mas[i] = (double*) malloc (sizeof (double)*n);
    read(mas, n);
    
	printf("Enter numbers in second mas: \n");
	mas2 = (double**) malloc (sizeof (double*) *n);
    for (int i = 0; i < n; i++)
        mas2[i] = (double*) malloc (sizeof (double)*n);
    read(mas2, n);
    
    printf("Enter operation: \n");
    scanf(" %c", &z);
    
    if(z = '+'){
    	res = plus(mas, mas2, n);
	}
    else if(z = '-'){
    	res = minus(mas, mas2, n);
	}
    else if(z = '*'){
    	res = umnog(mas, mas2, n);
	}
	else{
		printf("Sorry, we can't do this.");
		return 1;
	}
	printf("Result: \n");
	    printlnes(res, n);
	
	for(i = 0; i < n; i++)
        free(mas[i]);
    free(mas);
    for(i = 0; i < n; i++)
        free(mas2[i]);
    free(mas2);
    for(i = 0; i < n; i++)
        free(res[i]);
    free(res);
	return 0;
}