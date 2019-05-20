#include "phone.h"

void deletebyname(Person* ptr, int *num)
{
			int i;
			int temp;
			char name[30];
			printf("\n\tEnter a name to delete: ");
			scanf("%s", name);
			for( i = 0; i < MAX; i++) {
			if (strcmp(name, ptr[i].name) == 0) {
				temp = 101;
				break;
			}
            }
            if( temp != 101) 
            {
                printf("\tOops! %s is not in the PhoneBook." , name); 
            }
            else
            {
                printf("%s is deleted...", name); 
                for(i= i; i<*num-1; i++) 
                {
                    strcpy(ptr[i].name, ptr[i+1].name);
                    strcpy(ptr[i].number, ptr[i+1].number);
                    
                }
                --*num; 
            }
}
