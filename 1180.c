#include <stdio.h>
#include <string.h>
int main()
{
    char s[101], *p;
    int count = 0;
    gets(s);
    p = strtok(s, " ");
    while (p != NULL)
    {
        count++;
        p = strtok(NULL, " ");
    }
    printf("%d\n", count);

    return 0;
}