#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* ones[9] = { "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
const char* tens[10] = { "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC", "C" };

FILE* document;

char* arabic2roman(int num) {
        int arabic = num;
        int roman; 

        //printf("%i", arabic);

        if (arabic > 100 || arabic == 0) {
                printf("Sorry, this program does not support this number at this time.\n");
                return NULL;
        } else if (arabic < 10) {
                return ones[arabic-1];
        } else if (arabic % 10 == 0) {
                return tens[(arabic/10)-1];
        } else {
                const char* arabic_tens = tens[(arabic - (arabic % 10))/10 - 1];
                const char* arabic_ones = ones[(arabic % 10) - 1];

                char* roman = malloc(strlen(arabic_tens)+1+strlen(arabic_ones));
                strcpy(roman, arabic_tens);
                strcat(roman, arabic_ones);

                return roman;
        }
}

int main(int argc, char* argv[]) {
	document = fopen(argv[2], "wb+");
	return 0;
}
