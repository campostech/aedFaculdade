#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

n( int indices){
	int i;
	for(i=0; i<indices; i++){
		printf("\n");
	}	
}


float calculo(float x, float y, float z){
	return sqrt(x+y+z);
}

main(){
	float x = 0, y = 0, z = 0;
	
	printf("Digite o 1 numero: \n");
    scanf("%f", &x);
	n(1);
	printf("Digite o 2 numero: \n");
	scanf("%f", &y);
	n(1);
	printf("Digite o 3 numero: \n");
	scanf("%f", &z);
	
	system("CLS");
	n(1);
	
	printf("Resultado: %3.2f\n", calculo(x,y,z));
	
}