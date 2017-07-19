    #include<bits/stdc++.h>
    using namespace std;
     
    typedef unsigned long long ull;
    typedef long long ll;
    typedef vector<int> vi;
    typedef vector<long long> vll;
    typedef  vector<unsigned long long > vull;
     
    #define pb push_back
    #define mp make_pair
    #define rep(i,n) for(int i=0;i<(n);i++)
    #define Rep(i,a,b) for(int i=(a);i<(b);i++)
    #define repr(i,n) for(int i=(n-1);i>=0;i--)
    #define tc(t) while(t--)
    #define all(x) (x).begin(),(x).end()
    #define MOD 1000000007 
     
    int main()
    {
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
    	int t,n;
    	
    	bool  flag;
    	cin>>t;
    	tc(t){
    	ull val;
    		cin>>n;
    		vull a(n); 
    		rep(i,n){
    			cin>>a[i];
    		}
    		//sort(all(a));
    		val=ULLONG_MAX;
    			for(int i=0;i<n;i++){
    			for(int j=1+i;j<n;j++){
    				if(((a[i]*a[j])/(__gcd(a[i],a[j])))<val)
    				val=((a[i]*a[j])/(__gcd(a[i],a[j])));
    			}
    				
    		}
    			
    		
    		cout<<val<<"\n";
    		
    	}	
     
    }  
