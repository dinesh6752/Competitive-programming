#include<bits/stdc++.h>
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
#define repr(i,n) for(int i=(n-1);i>=0;i--)
#define wh(t) while(t--)
#define all(x) (x).begin(),(x).end()
#define sz(a) a.size()
 
#define MOD 1000000007
#define PI 3.14159265358979
#define endl '\n'
 
 
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin>>t;
	wh(t){
		string s;
		bool Hwin=0,Vwin=0;
		int hero=0,villian=0;
		cin>>n;
		rep(i,n){
			cin>>s;
			if(Hwin==0&&Vwin==0){
				if(s.size()>=3&&s[s.size()-3]=='m'&&s[s.size()-2]=='a'&&s[s.size()-1]=='n'){
					hero++;
				}
				else
					villian++;
				if(hero-villian>1)
					Hwin=true;
				else if(villian-hero>2)
					Vwin=true;
			}
			//cout<<hero<<villian;
			
		}
		if(Hwin){
				cout<<"superheroes\n";
			}
			else if(Vwin){
				cout<<"villains\n";
			}
			else
			{
				cout<<"draw\n";
			}
	}
	return 0;
}
 
 
 
 
 
