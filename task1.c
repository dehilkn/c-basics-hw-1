//calculator

#include<stdio.h>

int main(){


	char choice;
	float number_1;
	float number_2;
	float sum;

	printf("Input select operation (+,-,*,/): ");
	scanf("%c", &choice);

	printf("Input numbers: ");
	scanf("%e %e", &number_1, &number_2);

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
			if (number_2 == 0) {
				printf("Division by zero\n");
				return 0;
			} else {
				sum = number_1 / number_2;
			}
			break;
	      default:
		      printf("Not correct");
			return 0;
	}

	printf("Result: %f \n", sum);

        return 0;

}
