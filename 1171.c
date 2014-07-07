#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    char str1[256],str2[256];
    gets(str1);
    int i,j=0;
    for(i=0;str1[i];i++)
    {
        if(isdigit(str1[i])) //isdigit()函数对于ch>='0' && ch<='9'返回true
        {
            str2[j++]=str1[i];
        }
        else
        {
            while(str1[i+1]!='\0' && !isdigit(str1[i+1]))
            {
                i++;
            }
            str2[j++]='*';
        }
    }
    str2[j]='\0';
    puts(str2);
    return 0;
}