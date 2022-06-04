#include <stdio.h>
#include <stdlib.h>

const char* ones[9] = { "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
const char* tens[10] = { "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC", "C" };

int main(int argc, char* argv[]) {
	int arabic = atoi(argv[1]);
	printf("%i", arabic);
}
