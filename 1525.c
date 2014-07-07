#include <stdio.h>   
#include <string.h>   
int main()   
{   
    char s[200];   
    int a[200];   
    int i,len,max,k;   
    while(gets(s))   
    {   
        memset(a, 0, sizeof(a));   //memset 用某种字节内容覆写一段内存空间  sizeof关键字来获取改数组的大小//
        k = max = 0;   
        len = strlen(s);   //strlen 返回一个字符串的长度//
        for(i=0; i<len; i++){   
            if(s[i] == ' ') continue;   
            a[s[i]]++;   
        }   
        for(i=0; i<200; i++){   
            if(max < a[i]) {max = a[i]; k = i;}   
        }   
        printf("%c %d\n", k, max);   
    }   
    return 0;   
}
