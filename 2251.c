/* 
* @Author: omi
* @Date:   2014-07-07 15:43:01
* @Last Modified by:   omi
* @Last Modified time: 2014-07-13 18:52:47
*/
#include <stdio.h>
int main(){	
	int n,s,q,a,d=0,e=0,f=0,g=0,h=0;	
	scanf("%d",&n);	
	for(a=1;a<=n;a++)	{		
		scanf("%d",&s);
				q=s/10;
		switch(q)		{
				case 10:case 9:d++;
				break;
				case 8:f++;
				break;
				case 7:e++;
				break;
				case 6:g++;
				break;
				case 5:case 4:case 3:case 2:case 1:case 0:h++;
				break;
		
		}	
	}

		printf("A %d\nB %d\nC %d\nD %d\nE %d\n",d,f,e,g,h);


}
