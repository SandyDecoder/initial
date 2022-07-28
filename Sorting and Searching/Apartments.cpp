#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
	ll n, m, k, temp;
	vector<ll> des, aps;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++){
		cin>>temp;
		des.push_back(temp);
	}
	sort(des.begin(), des.end());
	for(int i=0;i<m;i++){
		cin>>temp;
		aps.push_back(temp);
	}
	sort(aps.begin(), aps.end());
	ll i=0, j=0, ans = 0;
	while(i<n && j<m){
	    if(abs(aps[j]-des[i]) <= k){
			i += 1;
			j += 1;
			ans += 1;
		}
		else if(aps[j] < des[i])
			j+=1;
		else if(aps[j] > des[i])
			i+=1;
	}
	cout<<ans<<endl;
	return 0;
}