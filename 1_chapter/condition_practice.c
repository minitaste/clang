#include <stdio.h>

int main(void)  {
	int num1, num2;
	
	printf("Enter the first number: \n");
	scanf("%d", &num1);
	printf("Enter the second number: \n");
	scanf("%d", &num2);

	if (num1 > num2) {
		printf("Number 1 is bigger than 2! \n");
		num2 = num1;
	} else if (num1 == num2) {
		printf("Both numbers are equal! \n");
	} else {
		printf("Number 2 is bigger! \n");
	}
	return 0;
}
