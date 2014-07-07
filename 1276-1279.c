#include <stdio.h>
int main(){
int a, b;
while (scanf("%d %d", &a, &b) == 2){
   printf("%d\n", a+b);
}
return 0;
}
//
#include <stdio.h>
int main(){
int z, a, b;
scanf("%d", &z);
while (z-- != 0){
   scanf("%d %d", &a, &b);
   printf("%d\n", a+b);
}
return 0;
}
//
#include <stdio.h>
int main(){
int a, b;
while (scanf("%d %d", &a, &b)==2 && (a!=0||b!=0)){
   printf("%d\n", a+b);
}
return 0;
}
//
#include <stdio.h>
int main(){
int a, b, c = 0;
while (scanf("%d %d", &a, &b)==2 && (a!=0||b!=0)){
   if (c){ printf("\n"); }
   c = 1;
   printf("%d\n", a+b);
}
return 0;
}