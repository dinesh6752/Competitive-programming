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
     
     int n,k,m,s=0;
    int N,mx,smx,mxi,smxi;
    std::vector<int> count1,tempc,a;
    std::vector<int> ans;
     
    int countOne(){
    	
    	
    	int curr=0,c=0;
    	rep(i,k){
    	
    		if(a[i]==1){
    			curr++;
    		}
    	}
    	tempc.pb(curr);
    	for(int i=k;i<sz(a)+k-1;i++){
    		if(a[i%n]==1){
    			curr++;
    		}
    		if(a[i-k]==1)
    			curr--;
    		if(i>=sz(a)){
    			count1.pb(curr);
    		}
    		else
    		tempc.pb(curr);
     
    	}
    	reverse(all(count1));
    	reverse(all(tempc));
    	rep(i,sz(count1)){
    		tempc.pb(count1[i]);
    	}
    	
    }
     
     
    //source: geeksforgeeks.com
     
     
    void mxone(){
    	
        int i;
        int k=n-::k+1;
        std::deque<int>  q(k);
        for (i = 0; i < k; ++i)
        {
            while ( (!q.empty()) && tempc[i] >= tempc[q.back()])
                q.pop_back();
     	       q.push_back(i);
        }
     
        for ( ; i < n+k-1; ++i)
        {
             ans.pb(tempc[q.front()%n]);
             while ( (!q.empty()) && q.front() <= abs(i - k))
                q.pop_front();
             while ( (!q.empty()) && tempc[i%n] >= tempc[q.back()%n])
                q.pop_back();
             q.push_back(i);
        }
     
        ans.pb(tempc[q.front()%n]);
    }
     
     
     
    int main()
    {
    	//ios_base::sync_with_stdio(false);
    	//cin.tie(NULL);
    	#ifndef ONLINE_JUDGE
    	freopen("/home/dinesh/code/input.txt", "r", stdin);
    	#endif
     	int r=0;
    	
    	string p;
    	cin>>n>>k>>m;
    	a.resize(n);
    	rep(i,n){
    		cin>>a[i];
    	}
    	cin>>p;
    	if(k>sz(a)){
    		k=sz(a);
    	}
    	countOne();
    	mxone();
    /*	rep(i,sz(tempc))
    		cout<<tempc[i]<<" ";
    		cout<<endl;
    	rep(i,sz(ans))
    		cout<<ans[i]<<endl;
    		cout<<"\n\n\n\n\n";*/
    	rep(i,sz(p)){
    		if(p[i]=='?'){
    			cout<<ans[r%n]<<endl;
    		}
    		else
    			r++;
    	}
    	
    }  
