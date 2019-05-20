#include "phone.h"

void printall(Person* ptr, int *num) {
	int i = 0;
	printf("<<Display all contacts in the PhoneBook>>\n");
	if (*num > 0) {
		for (i = 0; i < *num; i++) {
			printf("%s  ", ptr[i].name);
			printf("%s\n", ptr[i].number);
		}
	}
}
