

void toggleCase(char str[]) {
	int len = strlen(str);
	char result[len + 1];

	for (int i = 0; i < len; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			result[i] = str[i] - 32;  // Convert lowercase to uppercase
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			result[i] = str[i] + 32;  // Convert uppercase to lowercase
		}
		else {
			result[i] = str[i];  // Keep non-alphabetic characters unchanged
		}
	}

	result[len] = '\0';  // Add null terminator at the end of the result string

	printf("Toggled case: %s\n", result);
}

int main() {
	char str[100];

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	// Remove newline character at the end of the input
	if (str[strlen(str) - 1] == '\n') {
		str[strlen(str) - 1] = '\0';
	}

	toggleCase(str);

	return 0;
}


#include <stdio.h>
#include <ctype.h>

void toggleCase(char *str) {
	int i = 0;

	while (str[i] != '\0') {
		if (islower(str[i]))
			str[i] = toupper(str[i]);
		else if (isupper(str[i]))
			str[i] = tolower(str[i]);
		i++;
	}
}

int main() {
	char str[100];

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	toggleCase(str);

	printf("Toggled string: %s
		", str);

		return 0;
}