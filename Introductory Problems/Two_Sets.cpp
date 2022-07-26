#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll n;
	cin>>n;
	if(n <= 2){
		cout<<"NO"<<endl;
		return 0;
	}
	if(n%2){
		if((n-3)%4 == 0){
			cout<<"YES"<<endl;
			vector<int> part1, part2;
			part1.push_back(1);
			part1.push_back(2);
			part2.push_back(3);
			bool flag = true;
			for(int i=1;i<=(n-3)/2;i++){
				if(flag){
					part1.push_back(i+3);
					part1.push_back(n-i+1);
					flag = !flag;
				}
				else{
					part2.push_back(i+3);
					part2.push_back(n-i+1);
					flag = !flag;
				}
			}
			cout<<part1.size()<<endl;
			for(int i : part1)
				cout<<i<<" ";
			cout<<endl<<part2.size()<<endl;
			for(int i : part2)
				cout<<i<<" ";
		}
		else	cout<<"NO"<<endl;
	}
	else if(n%4==0){
		cout<<"YES"<<endl;
		vector<int> part1, part2;
		bool flag = true;
		for(int i=1;i<=n/2;i++){
			if(flag){
				part1.push_back(i);
				part1.push_back(n-i+1);
				flag = !flag;
			}
			else{
				part2.push_back(i);
				part2.push_back(n-i+1);
				flag = !flag;
			}
		}
		cout<<part1.size()<<endl;
		for(int i : part1)
			cout<<i<<" ";
		cout<<endl<<part2.size()<<endl;
		for(int i : part2)
			cout<<i<<" ";
	}
	else	cout<<"NO"<<endl;
	return 0;
}