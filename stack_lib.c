#define _CRT_SECURE_NO_WARNINGS
#include "stack_lib.h"

long int factorial_recursive(int n);




void push(int stack[], int val) {

	int number = countElements(stack);
	if (number >= STACK_SIZE) {
		printf("Stack is full.\n");
		return;
	}

	//val* new_value;
	int new_value = (int*)malloc(sizeof(val));
	if (new_value == NULL) {
		printf("No memory.\n");
		exit(1);
	}

	/*char brand[MAXSTRING] = {0};
	char licensePlate[MAXSTRING] = { 0 };

	printf("Type in the car brand:\n");
	scanf_s("%s", brand, sizeof(brand));
	printf("Type in the license plate: ");
	scanf_s("%s", licensePlate, sizeof(licensePlate));
	strcpy_s(new_value->brand, sizeof(brand), brand);
	strcpy_s(new_value->licensePlate, sizeof(licensePlate), licensePlate);
	*/


	stack[number] = new_value;




	return;
}

void pop(int stack[]) {
	int number = countElements(stack);
	if (number == 0) {
		printf("Stack is empty.\n");
		return;
	}
	number--;
	printf("The last value is:\n");
	//printf("Brand: %s\n", stack[number]->brand);
	//printf("License Plate: %s\n", stack[number--]->licensePlate);
	printf("Value: %d\n", stack[number]);
	free(stack[number + 1]);
	stack[number + 1] = NULL;
	return;
}

int isEmpty(int stack[]) {
	int number = countElements(stack);
	if (number == 0)
		return 0;
	else
		return 1;
}

int countElements(int stack[]) {
	int i = 0;
	for (i = 0; i < STACK_SIZE; i++) {
		if (stack[i] == NULL)
			break;
	}
	return i;
}

void printStack(int stack[]) {
	int number = countElements(stack);
	if (number == 0)
		printf("Stack is empty.\n");
	number--;
	while ((number >= 0) && (stack[number] != NULL)) {
		printf("The value %d is:\n", number);
		printf("Value: %d\n", stack[number]);
		//printf("Brand: %s\n", stack[number]->brand);
		//printf("License Plate: %s\n", stack[number]->licensePlate);
		number--;
	}
}

void initStack(int stack[]) {
	stack[0] = NULL;
}