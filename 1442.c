#include <stdio.h>  
main()  
{  
    double a,b,c;  
    double av;  
    int count;  
    int number,te;  
    scanf("%d",&number);  
    for(te=1;te<=number;te++)  
    {  
        count=0;  
        scanf("%lf %lf %lf",&a,&b,&c);  
        av=(a+b+c)/3;  
        if(a>av)  
            count++;  
        if(b>av)  
            count++;  
        if(c>av)  
            count++;  
        if(count>=2)  
            printf("Yes\n");  
        else  
            printf("No\n");  
  
    }  
}  