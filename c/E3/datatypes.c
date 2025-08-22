#include <stdio.h>

int main(void) {
	printf("\nSize of Types:\n");
	printf("\n- int:\n");
	printf("     %-19s %6zu bytes. \n","int", sizeof(int));
	printf("     %-19s %6zu bytes. \n","unsigned int", sizeof(unsigned int));
	printf("\n- char:\n");
	printf("     %-19s %6zu bytes. \n","chat", sizeof(char));
	printf("     %-19s %6zu bytes. \n","signed chat", sizeof(signed char));
	printf("     %-19s %6zu bytes. \n","unsigned chat", sizeof(unsigned char));
	printf("\n- long:\n");
	printf("     %-19s %6zu bytes. \n","long", sizeof(long));
	printf("     %-19s %6zu bytes. \n","unsigned long", sizeof(unsigned long));
	printf("\n- short:\n");
	printf("     %-19s %6zu bytes. \n","short", sizeof(short));
	printf("     %-19s %6zu bytes. \n","unsigned short", sizeof(unsigned short));
	printf("\n- float:\n");
	printf("     %-19s %6zu bytes. \n","float", sizeof(float));
	printf("     %-19s %6zu bytes. \n","double", sizeof(double));
	printf("     %-19s %6zu bytes. \n","long double", sizeof(long double));
	printf("\n");
	return 0;
}
