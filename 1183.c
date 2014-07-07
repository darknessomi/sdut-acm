#include <stdio.h>
int main(){
int n;
while (scanf("%d", &n) == 1){
   printf("%s\n", n%15==0 ? "Yes" : "No");
}
return 0;
}