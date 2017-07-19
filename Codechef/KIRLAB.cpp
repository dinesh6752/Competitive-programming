    #include <bits/stdc++.h>
    #define Max 10000005
    #define pb push_back
	#define ll long long  
    using namespace std;
     
    int spf[Max];
     
    void  sieve(){
 
	unsigned long long i,j;
 
		for(i=2;i*i<=Max;i++){
 
			if(spf[i]==0){
 
				for(j=i;i*j<=Max;j++){
					if(spf[i*j]==0){
						spf[i*j]=i;
 
					}
				}
			}
		}
		for(i=2;i<=Max;i++){
			if(spf[i]==0)
				spf[i]=i;
		}
}
    int main(){
    	sieve();
    	int t,n,i,j,x;
    	cin>>t;
    	while(t--){
    		cin>>n;;
    		vector<int> a;
    		int  dp[10000005]={0};
    		for(i=0;i<n;i++){
    			cin>>x;
    			if(x!=1)
    				a.pb(x);
    		}
    			
    		n=a.size();
    		std::vector<map<int,int> > f(n);
    		for(i=0;i<n;i++){
     
    			while(a[i]!=1){
    				//f[i].pb(spf[a[i]]);
    				f[i][spf[a[i]]]=1;
    				a[i]/=spf[a[i]];
    			}
    		}
    		for(i=0;i<n;i++){
    			int mx=0;
    			for(auto x:f[i]){
    				if(dp[x.first]>mx)
    					mx=dp[x.first];
    				//dp[x.first]=max(dp[x.first]+1,mx+1);
    			}
    			for(auto x:f[i]){
    				//if(dp[x.first]>mx)
    				//	mx=dp[x.first];
    				dp[x.first]=max(dp[x.first]+1,mx+1);
    			}
    		}
    		int m=0;
    		for(auto x:dp){
    			if(x>m)
    				m=x;
     
    		}
    		//cout<<"hey";
    		if(n==0)
    			cout<<1<<endl;
    		else
    		cout<<m<<endl;
     
    	
     
    	}
     
    }  
