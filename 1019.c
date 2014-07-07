#include <stdio.h>
int main(){
    int n,i,j;
    unsigned long long f[40];
    f[1] = 3;
    f[2] = 8;
    for(i = 3;i < 40;i++){
        f[i] = f[i-1]*2+f[i-2]*2;
    }
    while(scanf("%d",&n) == 1){
        printf("%llu\n",f[n]);
    }
    return 0;
}
