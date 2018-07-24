#include<iostream>
using namespace std;
int main(){
int a,b,c,min,max;
  cin>>a,cin>>b,cin>>c;
  if(a>=b && a>=c)max=a;
  else if(a<=b && a<=c)min=a;
    if(b>=a && b>=c)max=b;
    else if (b<=a && b<=c)min=b;
    if(c>=a && c>=b)max=c;
    else if(c<=a && c<=b)min=c;
    cout<<max-min;
}