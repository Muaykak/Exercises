#include <stdio.h>

int main(){
	printf("Write a C program that takes some integer values from the user and prints a histogram.\n\n");
	int bar_num, h_value;
	printf("Input number of histogram bar (Maximum 10): ");
	scanf("%d", &bar_num);
	if(bar_num > 10 || bar_num < 1){
		printf("\nInput Value must be in 1-10!\n");
		return 1;
	}
	int i = 0,bar[10],j ;
	printf("Input values between 0 and 10 (separated by space):\n");
	while(i < bar_num){
		scanf("%d", &bar[i]);
		if(bar[i] < 0 || bar[i] > 10){
			printf("the input value is out of range, \n please enter again.\n");
			continue;
		}
		else {
			i++;
		}
	}
	printf("\n\n\nHistogram:\n");
	i = 0;
	while (i < bar_num){
		j = 1;
		while(j <= bar[i]){
			printf("#");
			j++;
		}
		i++;
		printf("\n");
	}

	return 0;

}
