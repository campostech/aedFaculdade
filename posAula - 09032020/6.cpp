#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

const int quant = 3;

struct struct_numeros{
	float x = 0;
	float y = 0;
};

struct_nums nums[quant];

n( int indices){
	int i;
	
	for(i=0; i<indices; i++){
		printf("\n");
	}	
}


float calculo(){
	
	int i;
	float sum;
	
	for(i=0; i<=quant; i++){
		sum = nums[i].x + nums[i].y;
		
		printf("%d - Resultado soma: %.2f", i, sum);
		n(1);
	}
}

float set_nums(float x, float y, int indices){
	nums[indices].x = x;
	nums[indices].y = y;
}

main(){
	
	float x = 0, y = 0;
	int i;
	
	for(i=0; i<=quant; i++){
		printf("%d - Digite o primeiro numero: ", i);
		scanf("%f", &x);
		n(1);
		printf("%d - Digite o segundo numero: ", i);
		scanf("%f", &y);
		
		set_nums(x, y, i);
		
		system("CLS");
	}
	
	calculo();
	
}
