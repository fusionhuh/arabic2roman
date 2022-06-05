#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* ones[9] = { "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
const char* tens[10] = { "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC", "C" };

int main(int argc, char* argv[]) {
	int arabic = atoi(argv[1]);

	if (arabic > 100 || arabic == 0) {
		printf("Sorry, this program does not support this number at this time.\n");
		return NULL;
	} else if (arabic < 10) {
		printf("%s\n", ones[arabic-1]);
	} else if (arabic % 10 == 0) {
		printf("%s\n", tens[(arabic/10)-1]);
	} else {
		const char *arabic_tens = tens[(arabic - (arabic % 10))/10 - 1];
		const char *arabic_ones = ones[(arabic % 10) - 1];

		char * roman = malloc(strlen(arabic_tens)+1+strlen(arabic_ones));
		strcpy(roman, arabic_tens);
		strcat(roman, arabic_ones);

		printf("%s\n", roman);
	}
}
