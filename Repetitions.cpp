#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	string s;
	cin>>s;
	if(s.length() == 1){
		cout<<1<<endl;
		return 0;
	}
	int start = 0, mx_l = 1, i = 1;
	while(i<s.length()){
		if(s[start] == s[i]){
			i+=1;
			mx_l = max(mx_l, i-start);
		}
		else{
			start = i;
			i+=1;
		}
	}
	cout<<mx_l<<endl;
	return 0;
}