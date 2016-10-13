//Michael Alsbergas, 5104112
//This source file controls the input and output of a sorting list.

#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
#include "storage.h" 

void main(){ 

int num; 
int check;

int i; 
for(i = 0; i < 1;){ 
	check = scanf("%d", &num); 
	
	if(num == 0){
		int size = sizeOf();
		//output
		int j; 
		for(j = 0; j < size; j++){
			printf("%d\n", pop());
		}
		printf("Sorted data outputed. \n");
	}
	if(num != 0){
		if (check == EOF){
			int size = sizeOf();
			//output
			int j; 
			for(j = 0; j < size; j++){
				printf("%d\n", pop());
			}
			printf("Sorted data outputed. \n");
			i = 1;
			}
		if (check != EOF){
		//input
			input(num);
		}
	}
}
}