#include <stdio.h>
#include <math.h>
float dist(float x1,float y1,float x2,float y2)
{
     return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main()
{
     float x1,y1,x2,y2;
     while(scanf("%f %f %f %f",&x1,&y1,&x2,&y2)!=EOF)
     {
          printf("%.2f\n",dist(x1,y1,x2,y2));
        }
     return 0;
}
