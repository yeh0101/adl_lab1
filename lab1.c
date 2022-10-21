#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "stack_lib.h"
int factorial_iterative(int n);

//Iterative calculation
int factorial_iterative(int n){
	int f = 1;
	for (int i = 1; i <= n; i = i+1) {
		f = f * i;
	}
	return f;
}

//Recursive calculation
long int factorial_recursive(int n) {
	//int stack[STACK_SIZE]= NULL;//init
	if (n >= 1) {
		n = n * factorial_recursive(n - 1);
		push(stack, n);
		printStack(stack);
		return n;
		
	}
	else {
		return 1;
	}
}

int main() {

	//2.1 Implementing the two factorial functions
	int num;
	long int result;
	printf("Please enter a number: ");
	scanf("%d", &num);
	result = factorial_recursive(num);
	printf("%d factorial is %ld\n", num, result);
	





	/*	int stack[STACK_SIZE] = { 0 };
printf("%d factorial is %ld\n", p, factorial_recursive(p));
	

	//2.2
	int stack[STACK_SIZE] = {0};
	for (int i = 0; i < STACK_SIZE; i++) {
		stack[i] = NULL;
	}

	int choice;
	int number = 0;

	while (1) {
		printf("What would you like to do next?\n");
		printf("\t1: Push new element on the stack\n");
		printf("\t2: Pop element from the stack\n");
		printf("\t3: Count elements in the stack\n");
		printf("\t4: Print stack\n");
		printf("Press any other key to exit this program.\n");

		if (scanf_s("%d", &choice) != 1)
			return 0;

		switch (choice) {
		case 1:
			push(stack, 1);
			break;
		case 2:
			pop(stack, 2);
			break;
		case 3:
			number = countElements(stack);
			printf("The stack has %d elements.\n\n", number);
			break;
		case 4:
			printStack(stack);
			break;
		default:
			return 0;
		}
	}
	*/



	return 0;}