#include<bits/stdc++.h>
using namespace std;

 
int main(){
    int t;
    cin>>t;
    while(t--){
        int q;
        cin>>q;
        int v=0;
        set<int>  c;
        vector<pair<int,int > > a(q);
        map<int, int> mp;
        for(int i=0;i<q;++i){
        	
            cin>>a[i].first>>a[i].second;
            c.insert(a[i].first);	
            c.insert(a[i].second);
          
        }
        //sort(c.begin(), c.end());
        int i=0;
        for(auto x:c){
        	mp[x]=i++;
        }
        vector<int> wall(i);
        int p=0;
        for(int i=0;i<q;++i){
        	for(int j=mp[a[i].first],end=mp[a[i].second];j<=end;++j){
        		wall[j]=p;
        	}
        	p++;
        }
        c.clear();
        for(int i=0;i<wall.size();++i){
        	c.insert(wall[i]);	
        }
        cout<<c.size()<<"\n";
    }
} 