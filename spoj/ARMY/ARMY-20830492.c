#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int ng,nm;
		cin>>ng>>nm;
		vector<int> a(ng),b(nm);
		for(int i=0;i<ng;++i){
			cin>>a[i];
		}
		for(int i=0;i<nm;++i){
			cin>>b[i];
		}
		sort(a.begin(),a.end());
		sort(b.begin(), b.end());
		int i=0,j=0;
		for(;i<ng&&j<nm;){
			if(a[i]>=b[j])
				j++;
			else
				i++;
		}
		puts(j==nm?"Godzilla":"MechaGodzilla");
	}
}