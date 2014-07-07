#include <stdio.h>
int main(){
	int a[20020],i,j,k,n,s,s1,s2;//注意数组长度
 	while(scanf("%d",&n),n!=0){
  	n=n*2;
  	j=n-1;
  	s=0;
  	k=0;
  	for(i=0;i<n;i++){
   		scanf("%d",&a[i]);
   		s=s+a[i];
    }
  	s1=s;
  	s2=s;  
  	i=0;  
  	while(s1>0&&s2>0){
   		if(s1==s2){
    		k++;
    		s1=s1-a[i++];
    		s2=s2-a[j--];
   		}
   		else if(s1>s2){
    		s1=s1-a[i++];
   		}
   		else
    	s2=s2-a[j--];
  	}
   printf("%d\n",k);
 	}
}
