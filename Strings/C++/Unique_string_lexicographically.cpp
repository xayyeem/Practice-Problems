/*
	Program to print unique strings in lexicographical order
*/

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

/*INPUT OF PROGRAM
	5
	abc
	abc
	fgh
	def
	acd
*/

/*OUTPUT OF PROGRAM
	abc
	acd
	def
	fgh

*/
