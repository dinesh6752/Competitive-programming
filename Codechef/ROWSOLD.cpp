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
#define tc(t) while(t--)
 
int main()
{
 
	int t;
	cin>>t;
	tc(t){
            string s;
            ull prevSoldier=0,emptyCount=0,maxTime=0,currSoldier=0;
            cin>>s;
            for(int i=s.size()-1;i>=0;i--)
                if(s[i]=='0'){
    //                    cout<<"u";
                    emptyCount++;
                }
                else{
 
                    if(emptyCount>0){
                            currSoldier=1+emptyCount+prevSoldier;
                        emptyCount=0;
                    }
                    maxTime+=currSoldier;
                    prevSoldier=currSoldier;
        //            cout<<"d  "<<prevSoldier<<" "<<currSoldier<<"  "<<maxTime<<endl;
                }
                  cout<<maxTime<<endl;
            }
 
 
 
	}
 
 
