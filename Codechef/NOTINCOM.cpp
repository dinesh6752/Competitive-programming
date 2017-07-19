#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int t,n,m,x,c;
	cin>>t;
	while(t--){
		cin>>m>>n;
		set<int> a,b;
		c=0;
		for(int i=0;i<m;i++){
			cin>>x;
			a.insert(x);
		}
		for(int i=0;i<n;i++){
			cin>>x;
			if(a.count(x)==1){
				c++;
			}
		}
		cout<<c<<endl;
	}
} 
