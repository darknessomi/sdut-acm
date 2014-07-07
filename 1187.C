#include <stdio.h>
#include <string.h>

int main()
{
   int i;
   int length;
   char string[101];

   gets(string);
   length=strlen(string);

   for(i=0; i<length; i++)
   {
      if(string[i]<='z' && string[i]>='a')
   {
       string[i]=string[i]-32;
   }
      else if(string[i]<='Z' && string[i]>='A')
   {
       string[i]=string[i]+32;
   }
   else if(string[i]<='9' && string[i]>='0')
   {
        string[i]='9'-string[i]+'0';
   }
   }
  
   for(i=length-1; i>=0; i--)
   {
       printf("%c", string[i]);
   }

   return 0;
}
