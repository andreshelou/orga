#include<stdio.h>
#include<stdint.h>

#define N 14
#define M 16

uint32_t a[N][M];


int main(void){
	int n = 0;
	int m = 0;
	while(n < N){
		while(m < M){
			a[n][m] = n;
			//printf("%i %i ", m, n);
			m++;
		}
		m = 0;
//		printf("\n");
		n++;
	}
	for (int i=0;i<N;i++){
		printf("[%d]  ", a[i][m]);
	}
	return 0;
}
