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
        ull n,c,tot=0,p=0;
        cin>>n;
        vector<int> a(n);
        rep(i,n){
        cin>>a[i];
        tot+=a[i];
        }
        sort(all(a),greater<int>());
        rep(i,n){
            c++;    
            p+=a[i];
            if(p>tot-p){
            break;
            }
            }
            cout<<c;
        
     
    } 