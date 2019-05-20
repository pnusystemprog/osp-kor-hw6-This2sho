#ifndef _MAIN_H_
#include <stdio.h>
#include <string.h>

#define _MAIN_H_
#define MAX 50

typedef struct {
	char name[10];
	char number[13];
}Person;

Person person[MAX];

int regist(Person* ptr, int *num);
void printall(Person* ptr, int *num);
int personalprint(Person* ptr, int *num);
void deletebyname(Person* ptr, int *num);
int service;

#endif
