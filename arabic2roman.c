#include <stdio.h>
#include <stdlib.h>

const char* ones[9] = { "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
const char* tens[10] = { "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC", "C" };

int main(int argc, char* argv[]) {
	int arabic = atoi(argv[1]);
	int roman; 

	//printf("%i", arabic);

	if (arabic > 100 || arabic == 0) {
		printf("Sorry, this program does not support this number at this time.");
		return NULL;
	} else if (arabic < 10) {
		printf("%s", ones[arabic-1]);
		return ones[arabic];
	} else if (arabic % 10 == 0) {
		printf("%s", tens[(arabic/10)-1]);
		return tens[arabic];
	} //else if {}
}
