#include<stdio.h>
#include<stdint.h>

int sumar( int, int);
int mult( int, int);

int main(void){
	uint16_t a = 5;
	//uint8_t b = 3;
	//uint8_t c = 2;
	//int d = 1;
	
	printf("a=5, b=3, c=2, d=1 \n\n");
	//printf("%-20s %18b \n", " a + b * c ", ~((a+b)*c));
	//printf("%-20s %18b \n", " a % b ", ~(a%b) );
	printf("%-20s %18X \n", " a ", (a) );
	printf("%-20s %18X \n", " ~a ", (~a) );
	
	return 0;
}

int sumar(int x, int y){
	return x + y;
}

int mult( int x, int y){
	return x * y;
}
