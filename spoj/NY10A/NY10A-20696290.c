#include <bits/stdc++.h>
using namespace std;


int main(){
	int tt;
	cin>>tt;
	int c=0;
	while(tt--){
		int n,m;
		cin>>n;
		string s;
		cin>>s;
		string t(s.begin(),s.begin()+3);
		map<string,int> mp;

		//cout<<t;
		mp[t]++;
		for(int i=3;i<s.size();i++){
			t[0]=t[1];
			t[1]=t[2];
			t[2]=s[i];
			//cout<<t<<i<<" "<<"\n";
			mp[t]++;
		}
		
		cout<<n<<" "<<mp["TTT"]<<" "<<mp["TTH"]<<" "<<mp["THT"]<<" "<<mp["THH"]<<" "<<mp["HTT"]<<" "<<mp["HTH"]<<" "<<mp["HHT"]<<" "<<mp["HHH"]<<"\n";
		//cout<<endl;
		
	}

}