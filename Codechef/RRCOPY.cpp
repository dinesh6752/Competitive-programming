#include <bits/stdc++.h>
using namespace std;
 
int unique(vector<int> &a){
	set<int> s;
	for(int i=0;i<a.size();i++){
		s.insert(a[i]);
	}
	return s.size();
}
 
int main(){
	int t,i,n;
	cin>>t;
	while(t--){
		cin>>n;
		std::vector<int> v(n);
		for(i=0;i<n;i++){
			cin>>v[i];
		}
		cout<<unique(v)<<endl;
	}
} 
