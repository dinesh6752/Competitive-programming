#include <bits/stdc++.h>
using namespace std;




int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		if(x==y||x==y+2){
			if(!(x&1)){
				cout<<x+y<<endl;
			}
			else{
				cout<<x+y-1<<endl;
			}
		}
		else
		{
			cout<<"NO NUMBER\n";
		}
	}
}