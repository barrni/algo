#include<iostream>
using namespace std;
int main(){
int M1,M2,M3,max,min;
cin>>M1,cin>>M2,cin>>M3;
if(M1>=M2 && M1>=M3)max=M1;
else if(M2>=M1 && M2>=M3)max=M2;
else if(M3>=M1 && M3>=M2)max=M3;
if((M1<94 || M1>727) || (M2<94 || M2>727) || (M3<94 || M3>727)) cout<<"Error"; 
else cout<<max;
}   