#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isPal(string& s){
    for(int i=0;i<s.length()/2;i++) if(s[i]!=s[s.length()-i-1]) return false;
    return true;
}

int main(){
	string s;
	cin>>s;
	if(s.length() == 1 || isPal(s)){
	    cout<<s<<endl;
	    return 0;
	}
	map<char, string> mp;
	char odd_c = '0';
	sort(s.begin(), s.end());
	for(char c : s) mp[c] += c;
	for(char c : s){
		if(mp[c].length()&1 && c!=odd_c){
			if(odd_c != '0'){
				cout<<"NO SOLUTION"<<endl;
				return 0;
			}
			odd_c = c;
		}
	}
	string ans = "";
	for(int i=0;i<mp[odd_c].length();i++)	ans += odd_c;
	for(auto m : mp){
	    if(m.second.length() == s.length()){
	        cout<<s<<endl;
	        return 0;
	    }
	    else if(m.first != odd_c){
		    ans = m.second.substr(0,m.second.length()/2)+ans+m.second.substr(0,m.second.length()/2);
		}
	}
	cout<<ans<<endl;
	return 0;
}