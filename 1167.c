#include <stdio.h>
int main()
{
 int i, j, k;
 int sum, mut;
 double ave;
 scanf("%d %d %d", &i, &j, &k);
 	sum = i + j + k;
 	mut = i * j * k;
 	ave = (double)sum / 3;
 printf("%d %d %.2lf\n", sum, mut, ave);
 
}




