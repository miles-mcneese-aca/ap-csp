
#include <stdio.h>
#include <stdlib.h>

int main () {
	int array [100];
	int i;
	for(int i = 0; i < 100; i++){
		array[i] = rand() % 200;
	}
	int num;
	int found = 0;

	printf("Search for which number?\n");
	if (scanf("%d", &num) != 1) {
		fprintf(stderr, "Invalid input\n");
		return 1;
	}
	for(i = 0; i < 100; i++){
		if (array[i] == num){
			printf("Number %d found at index %d\n", num, i);
			found = 1;
			break;
		}
	}
if (!found){
		printf("Number %d not found in the array\n", num);
		}
 return 0;}
	