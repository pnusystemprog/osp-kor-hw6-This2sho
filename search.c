#include "phone.h"

int personalprint(Person* ptr, int *num) {
	char name[30];
	int i;
	if (*num > 0) {
		printf("Enter a name to search: ");
		scanf("%s", name);
		
		for( i = 0; i < MAX; i++) {
			if (strcmp(name, ptr[i].name) == 0) {
				printf("\n");
				printf("%s ", ptr[i].name);
				printf("%s\n",ptr[i].number);
				return 0;
			}
		}
		printf("Oops! %s is not in the PhoneBook\n" ,name);
		return 0;
	}
	else {
		printf("Oops! %s is not in the PhoneBook\n" ,name);
		return 0;
	}
}
