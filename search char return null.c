#include <stdio.h>

int  xstrchr(char*, int);

int main(){

	char str[100] = "hikjhughu";
	int c;

	printf("accept character:");
	scanf_s("%c", &c);

	int index = xstrchr(str, c);

	if (index != NULL){
		printf("character not found\n");
	}
	else{
		printf("character found at index: %u\n", index);
	}
	return 0;
}


int xstrchr(char* str, char c){
	int i = 0;
	while (str[i] != '\0'){
		if (str[i] == c)
			return i;
	}
	return NULL;
}




/*#include <stdio.h>

int x_strchr(const char*, int);

int main() {
    char str[100] = "Hello, World!";
    int ch = 'o';

    int index = x_strchr(str, ch);

    if (index != -1) {
        printf("Character '%c' found at index: %d\n", ch, index);
    } else {
        printf("Character '%c' not found.\n", ch);
    }

    return 0;
}

int x_strchr(const char* str, int ch) {
    int index = 0;
    while (str[index] != '\0') {
        if (str[index] == ch) {
            return index;
        }
        index++;
    }

    return -1;
}
*/