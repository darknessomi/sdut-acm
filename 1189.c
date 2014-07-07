#include <stdio.h>
int main(){
int n;
while (scanf("%d", &n) == 1){
   printf("%d\n", n/100+(n%100)/10*10+(n%10)*100);
}
return 0;
} 