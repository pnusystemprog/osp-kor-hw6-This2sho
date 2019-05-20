#include<stdio.h>
#include<string.h>
#include "phone.h"

int main() {
	int count = 0;
	
	printf("============ Telephone Book Management ============\n");
	do {
		printf("\n");
		printf("<<<1. Register 2. Print All 3. Search 4. Delete 5. Exit>>>\n");
		printf("\n");
		printf("Please enter your service number (1-5)> ");
		if (!(scanf("%d", &service)))
		{
			printf("Input Error\n");
			return -1;
		}
		else{
			switch (service) {
			case 1:
				if((regist(person, &count) == -1)) return 0;
				break;
			case 2: printall(person, &count); break;
			case 3: personalprint(person, &count); break;
			case 4: deletebyname(person, &count); break;
			}
			}
		} while (service !=5);
	return 0;
}
