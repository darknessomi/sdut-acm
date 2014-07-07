#include <stdio.h>   
int main()   
{   
    char m;   
    int a=0;int b=0;int  c=0;int d=0;   
    while((m=getchar())!=EOF)   
    {   
        if(m!='\n')   
        {   
         if(m>='a'&&m<='z'||m>='A'&&m<='Z')   
            a++;   
        else if(m>='0'&&m<='9')   
            b++;   
        else if(m==' ')   
            c++;   
        else  
            d++;   
        }   
  
      else  
      {   
        printf("%d %d %d %d\n",a,b,c,d);   
        a=0;b=0;c=0;d=0;   
      }    
    }   
    return 0 ;   
  
}
