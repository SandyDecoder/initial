#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll n, ans = 0;
	cin>>n;
	for(int i=5;n/i>=1;i*=5)	ans += n/i;
	cout<<ans<<endl;
	return 0;
}