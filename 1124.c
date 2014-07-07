#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
char map[103][103];
int f[103][103][103]={0};
int mx[4]={-1,0,1,0};
int my[4]={0,-1,0,1};
struct N 
{ 
	int x,y; 
	int a,d; 
}q[500],t,k;
int main()
{ 
	int i,j,m,n,d,flag=0;
	scanf("%d %d %d",&m,&n,&d);
	for(i=0;i<m;i++)
		scanf("%s",map[i]);
	int s=0,e=0;
	t.a=t.x=t.y=0; 
	t.d=d;
	q[e++]=t; 
	f[t.x][t.y][t.d]=1; 
	 while(s<e){
	 	k=q[s++];
	 	if(k.x==m-1&&k.y==n-1){
	 		printf("%d\n",k.a);
	 		return 0;
	 	} 
	 	for(i=0;i<4;i++){
	 		t.x=k.x+mx[i];
	 		t.y=k.y+my[i];
	 		if(t.x>=0&&t.x<m&&t.y>=0&&t.y<n&&!f[t.x][t.y][k.d]&&map[t.x][t.y]=='P'){
	 			t.a=k.a+1;
	 			t.d=k.d;
	 			q[e++]=t;
	 			f[t.x][t.y][t.d]=1;
	 		} 
	 	}
	 	for(j=2;j<=k.d;j++)
	 		for(i=0;i<4;i++){
	 			t.x=k.x+mx[i]*j;
	 			t.y=k.y+my[i]*j;
	 			if(t.x>=0&&t.x<m&&t.y>=0&&t.y<n&&!f[t.x][t.y][k.d-j]&&map[t.x][t.y]=='P'){
	 				t.a=k.a+1;
	 				t.d=k.d-j;
	 				q[e++]=t;
	 				f[t.x][t.y][t.d]=1;
	 			} 
	 		} 
	 	}
	 	printf("impossible\n");
	 	return 0;
	 }
