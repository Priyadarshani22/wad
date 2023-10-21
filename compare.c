#include <stdio.h>

int main() {

	char str1[100], str2[100];

	printf("Enter the first string: ");
	gets_s(str1,99);

	printf("Enter the second string: ");
	gets_s(str2,99);



	puts(str1);
	puts(str2);
	return 0;
}




int main() {
	int choice;

	do {
		
		printf("4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		getchar(); // Clear the newline character from the input buffer

		switch (choice) {
		case 1:
			compareStrings();
			break;
		case 2:
			concatenateStrings();
			break;
		case 3:
			copyString();
			break;
		case 4:
			printf("Exiting the program...\n");
			break;
		default:
			printf("Invalid choice. Please try again.\n");
			break;
		}

		printf("\n");
	} while (choice != 4);

	return 0;
}

void compareStrings() {
	char str1[MAX_LENGTH], str2[MAX_LENGTH];

	printf("Enter the first string: ");
	fgets(str1, MAX_LENGTH, stdin);
	str1[strcspn(str1, "\n")] = '\0'; // Remove the newline character from the input

	printf("Enter the second string: ");
	fgets(str2, MAX_LENGTH, stdin);
	str2[strcspn(str2, "\n")] = '\0'; // Remove the newline character from the input

	int result = strcmp(str1, str2);

	if (result < 0) {
		printf("'%s' is less than '%s'\n", str1, str2);
	}
	else if (result > 0) {
		printf("'%s' is greater than '%s'\n", str1, str2);
	}
	else {
		printf("'%s' is equal to '%s'\n", str1, str2);
	}
}

void concatenateStrings() {
	char str1[MAX_LENGTH], str2[MAX_LENGTH];

	printf("Enter the first string: ");
	fgets(str1, MAX_LENGTH, stdin);
	str1[strcspn(str1, "\n")] = '\0'; // Remove the newline character from the input

	printf("Enter the second string: ");
	fgets(str2, MAX_LENGTH, stdin);
	str2[strcspn(str2, "\n")] = '\0'; // Remove the newline character from the input

	strcat(str1, str2);

	printf("Concatenated string: %s\n", str1);
}

void copyString() {
	char source[MAX_LENGTH], destination[MAX_LENGTH];

	printf("Enter the source string: ");
	fgets(source, MAX_LENGTH, stdin);
	source[strcspn(source, "\n")] = '\0'; // Remove the newline character from the input

	strcpy(destination, source);

	printf("Copied string: %s\n", destination);
}















/* #include <stdio.h>
#include <string.h>

int main() {
	char str1[100], str2[100];

	printf("Enter the first string: ");
	scanf("%s", str1);

	printf("Enter the second string: ");
	scanf("%s", str2);

	int compare = strcmp(str1, str2);

	if (compare > 0) {
		printf("The first string is greater.\n");
	}
	else if (compare < 0) {
		printf("The second string is greater.\n");
	}
	else {
		printf("Both strings are the same.\n");
	}

	return 0;
}*/