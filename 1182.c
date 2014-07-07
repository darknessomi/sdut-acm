#include <stdio.h>
int main()
{
    int t, y, m, d, no, i;
    int p[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &y, &m, &d);
        if (y%400==0 || (y%4==0&&y%100!=0))
            p[2] = 29;
        else
            p[2] = 28;
        no = 0;
        for (i=1; i<m; i++)
            no += p[i];
        no += d;
        printf("%d\n", no);
    }
    return 0;
}