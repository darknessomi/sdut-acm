#include <stdio.h> 
#include <math.h> 
 
int main() 
{ 
     int i; 
     int n; 
     int m; 
     float t; 
     float sum; 
       
     while(scanf("%d %d", &n, &m)!=EOF) 
     {    
         sum= t= n*1.0; 
         for(i=1; i<m; i++) 
         { 
             sum+=sqrt(t); 
             t=sqrt(t); 
         } 
         printf("%0.2f\n", sum); 
     } 
   return 0; 
}
