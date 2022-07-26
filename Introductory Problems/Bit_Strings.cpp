#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll n;
	cin>>n;
	if(n<=29)	cout<<(ll)pow(2,n)<<endl;
	else{
		ll temp = pow(2,30);
		const ll md = 1000000007;
		temp%=md;
		n-=30;
		while(n){
			temp *= 2;
			n-=1;
			temp%=md;
		}
		cout<<temp<<endl;
	}
	return 0;
}