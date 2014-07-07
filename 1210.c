#include <stdio.h>
#include <string.h>
                                                                                                                                                      
int main()
{
 int n,i;
    char t;
 char a[101];
 while(gets(a)!=NULL)
 {
  n=strlen(a);

  for (i=0;i<n;i++)
  {
   if(a[i]>='A'&&a[i]<='Y')
   {
     a[i]=a[i]+32+1;
   }
   else if(a[i]=='Z')
   {
      a[i]='a';
   }
   else if(a[i]>='a'&&a[i]<='z')
   {
    t=a[i];
    switch(t)
    {
    case 'a': case 'b': case 'c':a[i]='2';
     break;
    case 'd': case 'e': case 'f':a[i]='3';
     break;
    case 'h': case 'i': case 'g':a[i]='4';
     break;
    case 'k': case 'l': case 'j':a[i]='5';
     break;
    case 'm': case 'n': case 'o': a[i]='6';
     break;
    case 'p': case 'q': case 'r': case's': a[i]='7';
     break;
    case 't': case 'u': case 'v': a[i]='8';
     break;
    case 'w': case 'x': case 'y': case 'z': a[i]='9';
     break;
    
    }
  }
 }
 puts(a);   
 }
 return 0;
 }  

 