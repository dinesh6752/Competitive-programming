#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
 
        set<string> s;
        int count=0;
        bool ans=false;
        vector<string> a(4),b(4);
        for(int i=0;i<4;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
 
        for(int i=0;i<4;i++){
            cin>>b[i];
            if(s.count(b[i])==1)
                count++;
        }
        if(count>=2)
            ans=true;
        puts(ans?"similar":"dissimilar");
 
    }
}
 
