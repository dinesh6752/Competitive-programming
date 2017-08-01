#include <bits/stdc++.h>
using namespace std;

int main(){
	long n,m,i,j,c=0,k;
	cin>>n>>m;
	string a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	map<int,int> mp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			c=0;
			for(k=0;k<m;k++){
				if(a[i][k]=='1'||a[j][k]=='1'){
					c++;
				}
			}
			//cout<<c;
			mp[c]++;
		}
	}
	long mx=0,v=0;
	for(auto x:mp){
		//cout<<x.first;
		if(mx<x.first){
			mx=x.first;
			v=x.second;
		}
	}
	cout<<mx<<"\n"<<v;
}