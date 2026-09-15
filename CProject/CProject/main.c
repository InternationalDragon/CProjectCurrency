#include <stdio.h>

int main() {
	
	int choice;

	printf("Welcome! Please select an option(1-3):\n");
	printf("1. Client\n");
	printf("2. Cashier\n");
	printf("3. Manager\n");
	scanf_s("%d", &choice);
	if (choice == 1) {
		printf("You selected Client.\n");
	}
	else if (choice == 2) {
		printf("You selected Cashier.\n");
	}
	else if (choice == 3) {
		printf("You selected Manager.\n");
	}
	else {
		printf("Invalid selection. Please try again.\n");
	}


	return 0;
}