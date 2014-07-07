#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{

   double a,b,c,d,s;
   cin>>a>>b>>c;
    cout<<fixed<<setprecision(2);
   if(b*b-4*a*c>=0)
   { s=(-b+sqrt(b*b-4*a*c))/(2*a);d=(-b-sqrt(b*b-4*a*c))/(2*a);
   if(s>d)
    cout<<s<<' '<<d<<endl;
   else
    cout<<d<<' '<<s<<endl;
   }
else
    cout<<-b/(2*a)<<'+'<<sqrt(4*a*c-b*b)/(2*a)<<'i'<<' '<<-b/(2*a)<<'-'<<sqrt(4*a*c-b*b)/(2*a)<<'i'<<endl;
    return 0;
}