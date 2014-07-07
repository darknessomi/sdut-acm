#include <stdio.h>
int main()
{
    int T,A,B;
    scanf("%d",&T);
    while (T--)
    {
        scanf("%d%d",&A,&B);
        A%=100;B%=100;
        printf("%d\n",(A+B)%100);
    }
    return 0;
}
