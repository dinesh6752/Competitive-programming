#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    ll m,s,ts;
    cin>>m>>s;
    ts=s;
    if(s==0&&m==1)
        cout<<"0 0";
    else
    if(s==0||(m*9)<s){
        cout<<"-1 -1";
    }
    else{
        vector<int> l(m),sm(m);
        for(int i=0;i<m;++i){
            if(s>9){
                l[i]=9;
                s-=9;

            }
            else{
                l[i]=s;
                break;
            }

        }
        s=ts;

            for(int i=0;i<m;++i){
            if(i==0){
                for(int j=1;j<=9;j++){
                   // cout<<"che king..."<<s<<" "<<s-j<<"\n";
                    if((m-(i+1))*9>=s-j){
                        sm[i]=j;
                        s-=j;
                        break;
                    }
                }
            }
            else{
                for(int j=0;j<=9;j++){
                    if((m-(i+1))*9>=s-j){
                        sm[i]=j;
                        s-=j;
                        break;
                    }
                }
            }

        }
        for(int i=0;i<m;++i){
            cout<<sm[i];
        }
        cout<<" ";
        for(int i=0;i<m;++i){
            cout<<l[i];
        }
    }
}