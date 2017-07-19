#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		std::vector<string> a(n);
		bool stable=true;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]=='B'&&i+1<n&&a[i+1][j]=='A'){
					stable=false;
					break;
				}
				if(a[i][j]=='W'&&((j-1<0||a[i][j]=='A')||(j+1>=m||a[i][j+1]=='A')||(i+1>=n||a[i+1][j]=='A'))){
					stable=false;
					break;
				}
 
 
			}
			if(!stable)
				break;
		}
		puts(stable?"yes":"no");
 
	}
} 
