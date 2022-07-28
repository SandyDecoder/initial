#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
	ll n, temp;
	set<ll> uniq;
	cin>>n;
	while(n--){
		cin>>temp;
		uniq.insert(temp);
	}
	cout<<uniq.size();
	return 0;
}