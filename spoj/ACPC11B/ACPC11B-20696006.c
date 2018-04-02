#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n;
		std::vector<int> a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		cin>>m;
		std::vector<int> b(m);
		for(int i=0;i<m;i++)
			cin>>b[i];
		sort(a.begin(), a.end());
		int md=INT_MAX;
		for(int x:b){
			int idx=upper_bound(a.begin(), a.end(),x)-a.begin();
			if(idx-1>=0&&idx-1<n){
				md=min(md,abs(x-a[idx-1]));
			}
			if(idx<n&&idx>=0){
				md=min(md,abs(x-a[idx]));
			}
		}
		cout<<md<<"\n";
	}

}