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
void factorial_recursivemm(int n) {
	int n_fact = pop(stack);
	if (n_fact >= 1) {
		push(stack, n_fact - 1);
		exit(1);
	}
	else {
		push(stack, 1);
	}
}


//Recursive calculation
void factorial_recursive(int nnjbnjn) {
	int n_fact = pop(stack);
	if (n_fact >= 1) {
		push(stack, n_fact - 1);
		factorial_recursive(n_fact - 1);
		int result = pop(stack);
		n_fact = n_fact * result;
		push(stack, n_fact);
	}
	else {
		push(stack, 1);
	}
}

int main() {
	int num;
	long int result;

	initStack(stack);
	printf("Please enter a number: ");
	scanf("%d", &num);
	push(stack, num);
	factorial_recursive(num);
	result = pop(stack);
	printStack(stack);
	printf("%d factorial is %ld\n", num, result);

	return 0;}