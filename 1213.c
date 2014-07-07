#include <stdio.h>
#include <string.h>
int main(){
	int i,j,k1,k2,flag1,flag2,lon;
	char st1[100000],st2[100000];
	while(scanf("%s%s",st1,st2)!=EOF){
		flag1=1;
		if(st1[0]=='0'&&st2[0]=='0') break;
		k1=strlen(st1);
		k2=strlen(st2);
		j=0;
		for(i=0;i<=k2-1;i++){
			flag2=0;
			for(j=j;j<=k1-1&&flag2==0;j++){
			lon=(st1[j]+st2[i]);
			//if(lon!=155) flag1=1;
				if(i==k2-1&&lon==155) {flag2=1;flag1=0;}
		        else	if(lon==155) flag2=1;
				else flag2=0;			
			}
		}	
        //if(k2>k1) flag1=1;
		if(flag1==0) printf("Yes\n");
		else printf("No\n");				
	}
	return 0;
}
