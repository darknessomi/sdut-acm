#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

char a[100];

void deal(char *s)
{
    int i,len;
    len=strlen(s);
    if(isalpha(s[0]) || s[0]=='_')
    {
        for(i=1; i<len; i++)
        {
          if(!(isalpha(s[i]) || s[i]=='_' || isdigit(s[i])))
          {
               printf("NO\n");
               return;
          }
         
        }
        printf("YES\n");
        
    }
    else
    {
        printf("NO\n");
    }

}


void solve()
{
    gets(a);
    deal(a);
}


int main()
{
    solve();
     getchar();
     getchar();
    return 0;
}