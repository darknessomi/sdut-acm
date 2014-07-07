 #include <iostream>
 using namespace std;
 int num[100];
 int main()
 	{
	 int t;
	 while(cin>>t,t!=-1)
	 {
    	int i=1;
   		int n=0;
   		int j;
    	int k;
    	num[0]=t;
   		while(cin>>num[i],num[i]!=0) 
  		  	i++;
   		for(j=0;j<i-1;j++)
    		{
     			for(k=j+1;k<i;k++)
     			{
 				if(num[j]==num[k]*2||num[k]==num[j]*2)
 					n++;
    			}
   		}
   		cout<<n<<endl;
  	}
  	return 0;
 }
 
