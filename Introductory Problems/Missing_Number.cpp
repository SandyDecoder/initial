#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll n;
	cin>>n;
	ll num;
	vector<bool> present(n, false);
	for(int i=0;i<n-1;i++){
		cin>>num;
		present[num-1] = true;
	}
	for(int i=1;i<=n;i++)	if(!present[i-1])	cout<<i<<endl;
	return 0;
}