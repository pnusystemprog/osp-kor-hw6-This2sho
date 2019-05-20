#include "phone.h"

int regist(Person* ptr, int *num) {
	char passwd[20] = { 0 };

	static int error;
	printf("Password:");
	do {
		scanf("%s", passwd);
		
		if (strcmp(passwd, "qwer1234") == 0) {
			printf("NEw User Name: ");
			scanf("%s", ptr[*num].name);
			printf("PhoneNumber: ");
			scanf("%s", ptr[*num].number);
			printf("%s Registered...\n", ptr[*num].name);
			(*num)++;
			return 0;
		}
		else {

			if(error < 3) {
				error = error + 1;
				printf("Not Mached(%d) !!!", error);
			}
			else {
				printf(">>>You are not allowed to\n");
				printf("\n");
				printf("cccees PhoneBook.");
				error = 0;
				return -1;
			}
		}
	} while (error < 10);
}
