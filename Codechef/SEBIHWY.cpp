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
     
    #define MOD 1000000007 
     
    int main()
    {
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
    	int t;
    	 float T;
    	 
    	float s,sg,fg,d,as;
    	cin>>t;
    	wh(t)
    	{
    		cin>>s>>sg>>fg>>d>>T;
    		d*=50;
    		d*=60;
			d=(d*60);
    		d/=1000;
    		
    		as=d/T;
    		s+=as;
    		//cout<<s<<"\n";
    		if(abs(s-sg)==abs(s-fg))
    		cout<<"DRAW\n";
    		else if(abs(s-sg)<abs(s-fg))
    		cout<< "SEBI\n";
    		else
    		cout<<"FATHER\n";
    		 
    	}
    }  
