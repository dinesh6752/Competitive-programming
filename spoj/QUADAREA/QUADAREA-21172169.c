#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
   int t;
   cin>>t;
   int tc=1;
   while(t--){
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double ans=(1.0/4.0)*sqrt((a+b+c-d)*(-a+b+c+d)*(a-b+c+d)*(a+b-c+d));
    cout<<fixed<<setprecision(2)<<ans<<"\n";
   }
}