#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=500005;
std::vector<int> a;

int main(){
	//ios_base::sync_with_stdio(0);
	//cin.tie(0);
	int n,x;
	cin>>n;
	
	while(n--){
		cin>>x;
		if(x&1){
			cout<<x<<endl;
		}
		else{
			int rev=0;
			while(x){
				rev<<=1;
				rev|=x&1;
				x>>=1;
			}
			cout<<rev<<endl;
		}

	}

}