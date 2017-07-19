#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,x;
	cin>>t;
	while(t--){
		cin>>n;
 
		map<int,int> m;
		for(int i=0;i<n;i++){
			cin>>x;
			m[x]++;
		}
		map<int,int>::iterator it;
		for(it=m.begin();it!=m.end();it++){
			cout<<it->first<<": ";
			
				cout<<it->second<<endl;
		}
		cout<<endl;
	}
}
 
