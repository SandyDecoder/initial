#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll n;
	cin>>n;
	if(n == 1)	cout<<1<<endl;
	else if(n <= 3)	cout<<"NO SOLUTION"<<endl;
	else{
		vector<ll> nums;
		for(int i=2;i<=n;i+=2)	nums.push_back(i);
		for(int i=1;i<=n;i+=2)	nums.push_back(i);
		for(int i=0;i<n;i++)	cout<<nums[i]<<" ";
	}
	return 0;
}