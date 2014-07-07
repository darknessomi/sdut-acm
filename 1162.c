#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	int z, n, t, sum, b = 0;
	scanf("%d", &z);
	while (z-- != 0){
		scanf("%d", &n);
		sum = 0;
		while (n-- != 0){
			scanf("%d", &t);
			sum += t;
		}
		if (b){
			printf("\n");
		}
		b = 1;
		printf("%d\n", sum);
	}
	return 0;
}