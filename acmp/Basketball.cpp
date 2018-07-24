#include<iostream>
using namespace std;
int main(){
int a0,a1,a2,a3,b0,b1,b2,b3;
cin>>a0,cin>>b0;
cin>>a1,cin>>b1;
cin>>a2,cin>>b2;
cin>>a3,cin>>b3;
if(a0+a1+a2+a3>b0+b1+b2+b3)cout<<"1";
else if(a0+a1+a2+a3<b0+b1+b2+b3)cout<<"2";
else cout<<"DRAW";   
}