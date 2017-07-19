#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef  vector<unsigned long long > vull;
 
#define pb push_back
#define mp make_pair
#define X first
#define Y second
 
#define rep(i,n) for(int i=0;i<(n);i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define wh(t) while(t--)
#define all(x) (x).begin(),(x).end()
#define sz(a) a.size()
 
#define MOD 1000000007
 
 
 
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int t;
	cin>>t;
	wh(t){
		string s;
		int done[3]={0};
		bool ok=true;
		cin>>s;
		rep(i,sz(s)){
			if(s[i]=='C'){
				if(done[0]){
					ok=false;
					break;
				}
 
			}
			else if(s[i]=='E'){
				if(done[1]){
					ok=false;
					break;
				}
				else{
					done[0]=1;
				}
				
			}
			else if(s[i]=='S'){
				if(done[2]){
					ok=false;
					break;
				}
				else{
					done[0]=done[1]=1;
				}
				
			}
		}
		puts(ok?"yes":"no");
	}
 
	return 0;
}
 
