#include <stdio.h>
int main(void)
{
char str[100];
scanf("%s",str);
printf("password is ");
int i;
for(i=0;i<5;i++)
    printf("%c",str[i]+4);
printf("\n");
return 0;
}
