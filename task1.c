//calculator

#include<stdio.h>

int main(){


	char choice;
	int number_1;
	int number_2;
	int sum;

	printf("Input select operation (+,-,*,/): ");
	scanf("%c", &choice);

	printf("Input numbers: ");
	scanf("%d %d", &number_1, &number_2);

	switch(choice){
		case '+':
		      sum=number_1+number_2;
		      break;
		case '-':
		      sum=number_1-number_2;
		      break;
		case '*':
		      sum=number_1*number_2;
		      break;
		case '/':
		      sum=number_2/number_1;
		      break;
		default:
		      printf("Not correct");
	}

	printf("Result: %d \n", sum);

        return 0;

}
