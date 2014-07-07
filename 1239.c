#include<iostream>
using  namespace std;
int main()
{       
       int a,b,c,x;    
        int m,n;
       int flag;
     while (cin>>m>>n)
    {
          if (m==0 && n==0)
            break;
            flag=0;
         for(x=m;x<=n;x++)  
         {      
              a=(int)x/100;   
              b=(int)(x/10-a*10);   
              c=x-a*100-b*10; 
            if(x==a*a*a+b*b*b+c*c*c)  
           {    
                flag=1; 
                cout<<x<<" ";        
           }
        }
           if(flag==0)   
           cout<<"no";
            cout<<endl;  
  }
}