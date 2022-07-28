#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool solve(int l, int r, int dp[][1000000001]){
	if(dp[l][r] != -1)	return dp[l][r]=1;
	if(l == 0 && r == 0){
		dp[l][r] = 1;
		return true;
	}
	if(l < 0 || r < 0){
		dp[l][r] = 0;
		return false;
	}
	if((l-2>=0 && r-1>=0) || (l-1>=0 && r-2>=0)){
		if(dp[l-2][r-1] != -1 && dp[l-1][r-2] != -1)	return (dp[l-2][r-1] == 1) || (dp[l-1][r-2] == 1);
		return solve(l-2, r-1, dp) || solve(l-1, r-2, dp);
	}
	return false;
}
int main(){
	ll n, l, r;
	cin>>n;
	while(n--){
		cin>>l>>r;
		int dp[l+1][r+1];
		memset(dp, -1, sizeof(dp));
		if(solve(l,r, dp))	cout<<"YES"<<endl;
		else	cout<<"NO"<<endl;
	}
	return 0;
}