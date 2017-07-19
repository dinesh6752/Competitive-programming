#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef  vector<unsigned long long > vull;
 
#define pb push_back
#define mp make_pair
#define X first
#define Y second
 
#define rep(i,n) for(int i=0;i<(n);i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define repr(i,n) for(int i=(n-1);i>=0;i--)
#define wh(t) while(t--)
#define all(x) (x).begin(),(x).end()
#define sz(a) a.size()
 
#define MOD 1000000007
#define PI 3.14159265358979
#define endl '\n'
ll d[1000000];
list<pair<int,int> > *graph;
void dijkstra(int root) {
set<pair<int,int> > pq;
set<pair<int,int> > ::iterator it;
int u,v,wt;
list<pair<int,int> > :: iterator i;
d[root]=0;
pq.insert(pair<int,int>(0,root));
while(pq.size()!=0)
{
    it=pq.begin();
 
    u=it->second;
 
    pq.erase(it);
 
    for(i=graph[u].begin(); i!=graph[u].end(); i++)
    {
        v=i->first;
        wt=i->second;
        if(d[v]>d[u]+wt)
        {
            if(d[v]!=1e8)
            {
                pq.erase(pq.find(pair<int,int>(d[v],v)));
            }
            d[v]=d[u]+wt;
            pq.insert(pair<int,int>(d[v],v));
        }
 
 
}
 
}
}
 
void addedge(int src,int des,int wt) { pair<int,int> x;
 
x.first=des;
x.second=wt;
graph[src].push_front(x);
x.first=src;
x.second=wt;
graph[des].push_front(x);
}
int main() {
 
int i;
 
int t,x;
 
cin>>t;
 
while(t--){
    int v,m,src,des,wt;
    double E=0;
 
    cin>>v>>m;
    vi res(m);
    for(i=0; i<=v; i++)
    {
        d[i]=1e8;
    }
 
    graph=new list<pair<int,int> >[v+1];
    for(i=0; i<v-1; i++)
    {
        wt=1;
        cin>>src>>des;
        addedge(src,des,wt);
    }
    dijkstra(1);
    rep(i,m){
        cin>>x;        //cout<<d[x]<<'\n';
        E=E+((d[x]*2)/(double)m);
    }
   cout<<fixed<<setprecision(6)<<E<<'\n';
    
 
 
}
return 0;
} 
