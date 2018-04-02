#include<bits/stdc++.h>
using namespace std;
const int N=4*(10+40000);
std::vector<int> tree[N+2];
int lazy[4*N+20];
std::vector<int>  update(int node,int start,int end,int l,int r,int val){
	
    if(lazy[node]){
        if(start!=end){
            lazy[2*node]=lazy[2*node+1]=1;
        tree[2*node]=tree[2*node+1]=tree[node];
        }
        
        lazy[node]=0;
    }
    if(end<l||start>r){
    	
        std::vector<int> v;
        return v;
    }
    else if(start>=l&&end<=r){
 
        tree[node].clear();
        tree[node].resize(1,val);
        lazy[node]=1;
        return tree[node];
    }
    else{
        int mid=(start+end)/2;
       
        update(2*node,start,mid,l,r,val);
        update(2*node+1,mid+1,end,l,r,val);
        tree[node].clear();
        for(int i=0;i<tree[2*node].size();i++){
            tree[node].push_back(tree[2*node][i]);
        }
        for(int i=0;i<tree[2*node+1].size();i++){
            tree[node].push_back(tree[2*node+1][i]);
        }
        return tree[node];
    }
}
 
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        fill(lazy,lazy+N,0);
        std::vector<int> tmp;
        fill(tree,tree+N,tmp);
        int q;
        cin>>q;
        int qw=q;
        int v=0;
        set<int>  cw;
        vector<pair<int,int > > aw(q);
        map<int, int> mpw;
        for(int i=0;i<qw;++i){
        	
            cin>>aw[i].first>>aw[i].second;
            cw.insert(aw[i].first);	
            cw.insert(aw[i].second);
          
        }
        //sort(c.begin(), c.end());
        int i=0;
        for(auto x:cw){
        	mpw[x]=i++;
        }
        vector<int> wall(i);
        int pw=0;
        for(int i=0;i<q;++i){
        	
        	update(1,0,10+40000,mpw[aw[i].first],mpw[aw[i].second],++v);
        }
        
        unordered_map<int,int> mp;
        for(auto x:tree[1]){
           // cout<<x<<" ";
            mp[x]=1;
        }
        cout<<mp.size()<<"\n";
    }
}  
 