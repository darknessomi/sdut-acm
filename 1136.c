#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool isPrime(int n)
{
    if (n == 2) return true;
    if ((n&1) == 0) return false;
    int i, q = (int)sqrt(n);
    for (i=3; i<=q; i+=2)
        if (n%i == 0) return false;
    return true;
}
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i=2; i<n; i++)
        if (isPrime(i) && isPrime(n-i))
            break;
    printf("%d=%d+%d\n", n, i, n-i);
    return 0;
}