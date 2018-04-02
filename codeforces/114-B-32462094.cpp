#include <bits/stdc++.h>
using namespace std;


int main(){

	int n,m;
	cin>>n>>m;
	vector<string> a(n);
	map<pair< string,string> ,int> enemy;
	int i,j;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<m;i++){
		string x,y;
		cin>>x>>y;
		enemy[{x,y}]=1;
		enemy[{y,x}]=1;
	}
	long long c=(1<<n);
	int mx=0;
	std::vector<string> mxp;
	for(i=1;i<c;i++){
		int t=i;
		std::vector<string> temp;
		for(j=0;j<18;j++){
			if((1<<j)&i){
				//cout<<j<<" ";
				temp.push_back(a[j]);
			}

		}
		//cout<<endl;

		bool ok=1;
		for(int k=0;k<temp.size();k++){
			for(int l=k+1;l<temp.size();l++){
				//cout<<"che "<<a[k]<<" "<<a[l]<<endl;
				if(enemy[{temp[k],temp[l]}])
					ok=0;
			}
		}
		if(ok){
			if(temp.size()>mxp.size()){
				//mx=temp.size();cout
				//cout<<"up\n";
				mxp=temp;
			}
		}
	}


	cout<<mxp.size()<<endl;;
	sort(mxp.begin(),mxp.end());
	for(int i=0;i<mxp.size();i++){
		cout<<mxp[i]<<endl;
	}
}