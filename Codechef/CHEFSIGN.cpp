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
	ull t;
	cin>>t;
	wh(t){
		string s,t;
		cin>>s;
		rep(i,sz(s)){
			if(s[i]!='=')
				t.pb(s[i]);
		}
		ull c=1,mx=1,curr=1;
		Rep(i,1,sz(t)){
			if(t[i-1]==t[i]){
				curr++;
			}
			else{
				curr=1;
			}
			if(curr>mx){
				mx=curr;
			}
 
		}
		if(!t.empty()){
			cout<<mx+1<<endl;
		}
		else{
			cout<<"1\n";
		}
 
	}	
 
}
 
