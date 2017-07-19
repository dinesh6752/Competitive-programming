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
 
 
 
#define maxn 10005
bool p[maxn];
 
void sieve(){
    ll i,j,c=0;
 
 	memset(p,true,sizeof(p));  
 	p[1]=0;
    p[0]=0;
    for(i=2;i<=maxn;i++){
        if(p[i]==1){
            
            for(j=i*i;j<maxn;j+=i){
            p[j]=0;
            }
        }
    }
}
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	sieve();
	ull t,n,pr;
	cin>>t;
	std::vector<ull> c(10005);
	for(int n=1;n<=10005;n++){
		for(int q=1;q<=n/2;q++){
			pr=n-2*q;
			if(p[pr]&&p[q]){
				if(n==2){
			
				}
				c[n]++;
 
			}
		}
	}
 
	wh(t){
		cin>>n;
		cout<<c[n]<<endl;
	}	
	
	
	return 0;
}
 
