#include <stdio.h>
#include <stdint.h>

int main(void) {
	printf("\nSize of stdint Types:\n");
	printf("\n- 8 bitz:\n");
	printf("       %-9s %6zu bytes. \n","int8_t ", sizeof(int8_t) );
	printf("       %-9s %6zu bytes. \n","uint8_t ", sizeof(uint8_t) );
	printf("\n- 16 bitz:\n");
	printf("       %-9s %6zu bytes. \n","int16_t ", sizeof(int16_t) );
	printf("       %-9s %6zu bytes. \n","uint16_t ", sizeof(uint16_t) );
	printf("\n- 32 bitz:\n");
	printf("       %-9s %6zu bytes. \n","int32_t ", sizeof(int32_t) );
	printf("       %-9s %6zu bytes. \n","uint32_t ", sizeof(uint32_t) );
	printf("\n- 64 bitz:\n");
	printf("       %-9s %6zu bytes. \n","int64_t ", sizeof(int64_t) );
	printf("       %-9s %6zu bytes. \n","uint64_t ", sizeof(uint64_t) );
	printf("\n");
	return 0;
}
