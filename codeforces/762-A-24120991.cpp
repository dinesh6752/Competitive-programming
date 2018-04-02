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
	ull n,k;
	cin>>n>>k;
   vector<ull> v;
   vull a;
    for (int i=1; i<=sqrt(n); i++)
    {
    		
        if (n%i==0)
        {
            if (n/i == i)
                a.pb(i);
            else
            {
                a.pb(i);
               v.push_back(n/i);
            }
        }
    }

    for(int j=sz(v)-1;j>=0;j--){
    	a.pb(v[j]);
    }
   /* rep(i,sz(a))
    cout<<a[i];*/
    if(sz(a)<k){
    	cout<<"-1";

    }
    else
    	cout<<a[k-1];
 
  
	return 0;
}