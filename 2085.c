#include <stdio.h>   
#include <stdlib.h>   
  
int main(int argc, char *argv[])   
{{   
  
 int n, i, j, k, l;   
 char s[210][210], tmp[210];   
 scanf("%d%*c", &n);   
 for(i = 1; i <= n; i++)   
 {   
  gets(tmp);   
  for(j = k = l = 0; tmp[j] != 0; j++)   
  {   
   if(tmp[j] != ' ')   
    s[k][l++] = tmp[j];   
   else  
   {   
    s[k++][l] = 0;   
    l = 0;   
   }   
  }   
  s[k][l] = 0;   
  printf("Case %d:",i);   
  for(; k >0; k--)   
   printf("%s ",s[k]);   
  printf("%s\n",s[0]);   
 }   
 return 0;   
}   
  
  return 0;   
}   
