#include<bits/stdc++.h>
using namespace std;

int main(){
	set<string> m;
	long long n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		m.insert(s);
	}
	for(auto it : m){
		cout<<it<<endl;
	}
	return 0;
}