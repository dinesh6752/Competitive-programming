#include <bits/stdc++.h>
using namespace std;

int main(){
	long i,j,t,n;
	
	cin>>t;
	while(t--){
		cin>>n;
		vector<long> m(n),f(n);  	
		for(i=0;i<n;i++)
			cin>>m[i];
		for(i=0;i<n;i++)
			cin>>f[i];
		sort(m.begin(),m.end());
		sort(f.begin(),f.end());
		long s=0;
		for(i=0;i<n;i++){
			s+=(m[i]*f[i]);
		}
		cout<<s<<endl;
	}
	
}