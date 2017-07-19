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
    #define wh(t) while(t--)
    #define all(x) (x).begin(),(x).end()
     
    #define MOD 1000000007 
     
    int main()
    {
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
    	ull t,k,n,m,e;
    	cin>>t;
    	wh(t)
    	{
    		cin>>n>>k>>e>>m;
    		ull x,s=0,scr=0,need;
    		vull a(n-1);
    		rep(i,n-1)
    		{
    			s=0;	
    			rep(j,e)
    			{	
    				cin>>x;
    				s+=x;
    				
    			}
    			a[i]=s;
    		}
    		rep(i,e-1)
    		{
    			cin>>x;
    			scr+=x;
    		}
    	
    		sort(all(a));
    		
    		 if(a[n-k-1]<scr)
    		cout<<"0\n";
    		else if(a[n-k-1]>=scr)
    		{
    			if(a[n-k-1]-scr+1>m)
    			cout<<"Impossible\n";
    			else
    			cout<<a[n-k-1]-scr+1<<"\n";
    		}
    	
    	
    	}	
    }  
