#define _CRT_SECURE_NO_WARNINGS
#include "stack_lib.h"

long int factorial_recursive(int n);




void push(int stack[], int val) {

	int num_element = countElements(stack);
	//printf("n: %d\n", num_element);
	if (num_element >= STACK_SIZE) {
		printf("Stack is full.\n");
		return;
	}

	stack[num_element] = val;
	//printf("v: %d\n", val);
	return;
}

void pop(int stack[]) {
	int num_element = countElements(stack);
	printf("%d", num_element);
	if (num_element == 0) {
		printf("Stack is empty.\n");
		return;
	}
	num_element--;
	printf("The last value is:\n");
	//printf("Brand: %s\n", stack[number]->brand);
	//printf("License Plate: %s\n", stack[number--]->licensePlate);
	printf("Value: %d\n", stack[num_element]);
	free(stack[num_element + 1]);
	stack[num_element + 1] = NULL;
	return;
}

int isEmpty(int stack[]) {
	int num_element = countElements(stack);
	if (num_element == 0)
		return 0;
	else
		return 1;
}

int countElements(int stack[]) {
	int i;
	for (i = 0; i < STACK_SIZE; i++) {
		if (stack[i] == NULL)
			break;
	}
	return i;
}

void printStack(int stack[]) {
	int num_element = countElements(stack);
	if (num_element == 0)
		printf("Stack is empty.\n");
	num_element--;
	while ((num_element >= 0) && (stack[num_element] != NULL)) {
		printf("Parameter n: %d\n", num_element);
		printf("Return value of factRect(%d): %d\n", num_element, stack[num_element]);
		//printf("Brand: %s\n", stack[number]->brand);
		//printf("License Plate: %s\n", stack[number]->licensePlate);
		num_element--;
	}
}

void initStack(int stack[]) {
	stack[0] = NULL;
}