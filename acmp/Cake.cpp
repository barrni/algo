#include<iostream>
using namespace std;
int main(){
int n,a;
cin>>n;
if(n%2==1 && n!=1)a=n;
else if (n%2==0) a=n/2;
else a=0;
cout<<a;
}