#include<iostream>
using namespace std;
int main(){
int n, a1, a2, a3, a4;
cin>>n;
if((n/1000)==(n%10) && (n/100)%10==(n/10)%10)cout<<"YES";
else cout<<"NO";
}