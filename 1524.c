#include <stdio.h>
#include <string.h>

 main()
{
 char *p, *t, str1[100], str2[100];
 int i = 0, n;
 p = str1;
 gets(str1); 
 n = strlen(str1);
 t = p+n-1;
 while(n--)
 {
  str2[i] = *t--;
  i++;  
 }
 str2[i] = '\0';
 
 if(strcmp(str1, str2)==0)
  printf("yes");
 else
  printf("no");
}
