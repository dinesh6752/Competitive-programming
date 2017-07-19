#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
	int t,n,x;
	string s;
	cin>>t;
	while(t--){
		cin>>n>>s;
		for(int i=0;i<n;i++)
			cin>>x;
		if(n==1&&s=="Dee"&&x%2==0){
			cout<<"Dee\n";
		}
		else
			cout<<"Dum\n";
	}
}
 
