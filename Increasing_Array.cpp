#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll n, temp;
	vector<ll> nums;
	cin>>n;
	while(n--){
		cin>>temp;
		nums.push_back(temp);
	}
	n = nums.size();
	ll mx_till_now = INT_MIN, ans = 0;
	for(int i=0;i<n;i++){
		if(!i && nums[i] >= mx_till_now)
			mx_till_now = nums[i];
		else if(nums[i] >= mx_till_now)
			mx_till_now = nums[i];
		else{
			ans += mx_till_now - nums[i];
			nums[i] = mx_till_now;
		}
	}
	cout<<ans<<endl;
	return 0;
}