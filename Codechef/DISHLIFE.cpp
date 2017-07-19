#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef  vector<unsigned long long > vull;
 
#define pb push_back
#define rep(i,n) for(int i=0;i<(n);i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define repr(i,n) for(int i=(n-1);i>=0;i--)
#define wh(t) while(t--)
 
int main()
{
 
	int t,n,k,p,i,j,c;
	bool all;
	cin>>t;
        wh(t){
            cin>>n>>k;
            all=true;
            c=0;
            map<int,int> m;
            vector<vector<int> > a(n);
 
            for(i=0;i<n;i++){
                    cin>>p;
                    a[i].resize(p);
                    for(j=0;j<p;j++){
                        cin>>a[i][j];
                        m[a[i][j]]++;
                    }
            }
 
            if(m.size()<k){
                cout<<"sad\n";
            }
            else{
                for(i=0;i<n;i++){
             c=0;
 
                    for(j=0;j<a[i].size();j++){
                            if(m[a[i][j]]>1)
                                c++;
                    }
                    if(c==a[i].size()){
                        all=false;
                        break;
                    }
            }
            puts(all?"all":"some");
 
            }
 
	}
}
 
