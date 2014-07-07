#include <stdio.h> 
 
int main() 
{ 
	int i; 
    int j; 
    int t; 
    int flag; 
    int a[10]; 
    int b[10]; 
 
       for(i=0; i<10; i++) 
       { 
           scanf("%d", &a[i]); 
       } 
 
       for(i=0; i<10; i++) 
       { 
           b[i]=a[i]; 
       } 
 
       for(i=0; i<9; i++) 
       { 
           for(j=i+1; j<10; j++) 
           {  
               if(a[i]> a[j]) 
               { 
                   t= a[i]; 
                   a[i]= a[j]; 
                   a[j]= t; 
               } 
           } 
       } 
 
       for(i=0; i<10; i++) 
       { 
           printf("%d", a[i]); 
           if(i<9) 
           { 
              printf(" "); 
           } 
           else 
           { 
              printf("\n"); 
           } 
       } 
        
 
       for(i=0; i<10; i++) 
       {     
           flag=0; 
           for(j=0; j<10; j++) 
           { 
               if(a[i]==b[j]) 
               {    
                   flag=1; 
                   printf("%d", j+1); 
                   if(i<9) 
                   { 
                      printf(" "); 
                   } 
               } 
               if(flag) 
               { 
                  break; 
               } 
           } 
       } 
 
       return 0; 
} 


