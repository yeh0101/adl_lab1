#define _CRT_SECURE_NO_WARNINGS
#include "stack_lib.h"

long int factorial_recursive(int n);

void push(int stack[], int val) {
	int num_element = countElements(stack);
	if (num_element >= STACK_SIZE) {
		printf("Stack is full.\n");
		exit(1);
		return;
	}

	stack[num_element] = val;
	printStack(stack);
	return;
}

int pop(int stack[]) {
	int num_element = countElements(stack);
	
	if (num_element == 0) {
		printf("pop Stack is empty.\n");
		exit(1);
	}
	num_element--;

	int deleted_element = stack[num_element ];
	stack[num_element ] = EMPTY;
	printStack(stack);

	return deleted_element;
}

int isEmpty(int stack[]) {
	int num_element = countElements(stack);
	if (num_element == 0)
		return 1;
	else
		return 0;
}

int countElements(int stack[]) {
	int i;
	for (i = 0; i < STACK_SIZE; i++) {
		if (stack[i] == EMPTY)
			break;
	}
	return i;
}

void printStack(int stack[]) {
	int num_element = countElements(stack);
	//if (num_element == 0)
		//printf("Stack is empty.\n");
	num_element--;
	while ((num_element >= 0) && (stack[num_element] != EMPTY)) {
		printf("value: %d\n", stack[num_element]);
		num_element--;
	}
}

void initStack(int stack[]) {
	for (int i = 0; i < STACK_SIZE; i++) {
		stack[i] = EMPTY;
	}
}