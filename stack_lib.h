#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#define MAXSTRING 20
#define STACK_SIZE 10


/*typedef struct value {
	//char brand[MAXSTRING];
	//char licensePlate[MAXSTRING];
	
} value;*/

int stack[STACK_SIZE];


/*void push(value* array[]);
void pop(value* array[]);
int isEmpty(value* array[]);
int countElements(value* array[]);
void printStack(value* array[]);*/

void push(int stack[], int val);
void pop(int stack[]);
int isEmpty(int stack[]);
int countElements(int stack[]);
void printStack(int stack[]);
void initStack(int stack[]);