#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
		set<int> f,ff;
		std::vector<int> fr,ffr;

	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		f.insert(x);
		//cout<<"inserting....."<<x<<endl;
		int m;
		cin>>m;
		while(m--){
			cin>>x;
			fr.push_back(x);
			
		}
		
	}


	for(int i=0;i<fr.size();i++){
		if(f.count(fr[i])!=1){
				ff.insert(fr[i]);
				//cout<<x<<"***"<<endl;
			}
	}
	cout<<ff.size();
}