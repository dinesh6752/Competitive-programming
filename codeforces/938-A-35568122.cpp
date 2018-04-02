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

#define all(x) (x).begin(),(x).end()
#define MOD 1000000007 
     


     bool isV(char c){
     	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y'){
     		return 1;

     	}
     	return 0;
     }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
   	string s;
   	cin>>n;
   	cin>>s;
   	for(int i=0;i<s.size();i++){
   		if(isV(s[i])){
		for(int j=i+1;j<n;j++)   			{
			if(isV(s[j]))
				s[j]='$';
			else
				break;
		}
   	}

}


for(char  c:s) {
	if(c!='$')
		cout<<c;
}

}