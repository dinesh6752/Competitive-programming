#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){


    int t;
    cin>>t;
    int tc=0;
    while(t--){
        int n;
        cin>>n;
        int k;
        
        if(n==3){
            cout<<"Case "<<++tc<<": "<<2<<" "<<3<<endl;
        }
        else {
            if(n&1) n--;
            cout<<"Case "<<++tc<<": "<<n/2<<" "<<n<<endl;
        }
        
    }
}