#include <stdio.h>

#include <math.h>

int main()

{

    double a,b,c;

    int tag = 0;

    while ( scanf("%lf%lf%lf", &a,&b,&c) )

    {

        if ( a == 0 && b == 0 && c == 0 )

        {

            break;

        }  

        if ( a*b*c>0 )

        {

            printf( "Triangle #%d\nImpossible.\n\n", ++tag );

        }  

        else if ( a == -1 )

        {

            if ( b>=c )

            {

                printf( "Triangle #%d\nImpossible.\n\n", ++tag );

            }  

            else

            {

                printf( "Triangle #%d\na = %.3lf\n\n", ++tag, sqrt( c*c-b*b ) );

            }  

        }  

        else if ( b == -1 )

        {

            if ( a>=c )

            {

                printf( "Triangle #%d\nImpossible.\n\n", ++tag );

            }  

            else

            {

                printf( "Triangle #%d\nb = %.3lf\n\n", ++tag, sqrt( c*c-a*a ) );

            }  

        } 

        else if ( c == -1 )

        {

                printf( "Triangle #%d\nc = %.3lf\n\n", ++tag, sqrt( a*a+b*b ) );

        }         

    }  

    return 0;

}  
