#include <stdio.h>
int main()
{
 char a,b,c;
 c=getchar();
 while(c!='\n')
 {
  if(c>='a'&&c<='z')
  c=c-32;
  else if(c>='A'&&c<='Z')
  c=c+32;
  else c=c;
   printf("%c",c);
   c=getchar();
 }
 printf("\n");
 return 0;
}