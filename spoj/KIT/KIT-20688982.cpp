#include <bits/stdc++.h>
using namespace std;


int main(){

	int n,k=0;
	cin>>n;
	std::vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	string x;
	while(cin>>x){
		if(x=="-1")
			return 0;
		for(int j=0;j<x.size();j++){
			char c=x[j];
			cout<<char((c-'a'+a[(k++)%n])%26+'a');
		}
		cout<<endl;
	}

}