#include<bits/stdc++.h>
using namespace std;
const int N=4*(10+1e7);
std::vector<int> tree[N+2];
int lazy[N+2];
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
        int v=0;
        while(q--){
            int x,y;
            cin>>x>>y;
            update(1,0,10+1e7,x-1,y-1,++v);
        }
        unordered_map<int,int> mp;
        for(auto x:tree[1]){
           // cout<<x<<" ";
            mp[x]=1;
        }
        cout<<mp.size()<<"\n";
    }
} 