#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int tc;
	cin>>tc;
	while(tc--){
		ll n;
		bool done=0;
		cin>>n;
		int c=n	;
		ll x=1,y=1;
		ll t=1,id=1;
		
		while(1){
			//cout<<x<<" "<<y<<"dd ";
			if(done)
				break;
			if(t&1){
				int i=x++,j=1;
				y++;
				for(;i>0&&j>0;i--,j++){
					//cout<<i<<" "<<j<<"\n";
					if(id==n){
						cout<<"TERM "<<n<<" IS "<<i<<"/"<<j<<"\n";
						done=1;
						break;

					}
					id++;
				}

			}
			else {
				int i=1,j=y++;
				x++;
				for(;i>0&&j>0;i++,j--){
					//cout<<i<<" "<<j<<"\n";
					if(id==n){
						cout<<"TERM "<<n<<" IS "<<i<<"/"<<j<<"\n";
						done=1;
						break;

					}
					id++;
				}

			}
			t++;
						
		}
		
	}

}