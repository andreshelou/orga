#include <stdio.h>

int main(void){
	float flt = 0.1;
	printf("%f \n", flt );
	printf("%d \n", flt );
	int flt_f = (float) flt;
   	int flt_d = (double) flt;
	printf("%i \n", flt_f);
	printf("%i \n", flt_d);
	return 0;
}
