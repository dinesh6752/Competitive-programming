#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
 
std::vector<int> a;
struct N{
    int v[3];
};
N tree[4000004];
 
void build(int node,int start,int end){
 
	if(start==end){
		tree[node].v[0]=a[start];
		tree[node].v[1]=0;
		tree[node].v[2]=-1;
	}
	else{
		int mid=(start+end)/2;
		build(2*node,start,mid);
		build(2*node+1,mid+1,end);
		vector<int> tmp;
		for(int ind=0;ind<3;ind++){
            tmp.push_back(tree[2*node].v[ind]);
		}
        for(int ind=0;ind<3;ind++){
            tmp.push_back(tree[2*node+1].v[ind]);
		}
		sort(tmp.rbegin(),tmp.rend());
		tree[node].v[0]=tmp[0];
		tree[node].v[1]=tmp[1];
		tree[node].v[2]=tmp[2];
	}
}
void update(int node,int start,int end,int l,int r,int val){
    //cout<<l<<" "<<r<<endl;
	if(start>r||l>end){
            //cout<<"YEA"<<start<<" "<<r<<" "<<l<<" "<<end<<endl;
            return;
 
	}
	else if(start>=l&&r==end){
           // cout<<start<<" "<<end<<endl;
           // cout<<"up"<<node<<" "<<l<<" "<<r<<" "<<val<<endl;
		tree[node].v[0]=val;
		tree[node].v[1]=0;
		tree[node].v[2]=-1;
 
	}
	else{
		int mid=(start+end)/2;
		update(2*node,start,mid,l,r,val);
		update(2*node+1,mid+1,end,l,r,val);
		vector<int> tmp;
		for(int ind=0;ind<3;ind++){
            tmp.push_back(tree[2*node].v[ind]);
		}
        for(int ind=0;ind<3;ind++){
            tmp.push_back(tree[2*node+1].v[ind]);
		}
		sort(tmp.rbegin(),tmp.rend());
		//cout<<tmp[0]<<" "<<tmp[1]<<tmp[2]<<endl;
		tree[node].v[0]=tmp[0];
		tree[node].v[1]=tmp[1];
		tree[node].v[2]=tmp[2];
	}
}
 
N query(int node,int start,int end,int l,int r){
	if(start>r||l>end){
            N temp;
            temp.v[0]=temp.v[1]=temp.v[2]=-1;
            return temp;
 
	}
	else if(start>=l&&r>=end){
		return tree[node];
	}
	else{
		int mid=(start+end)/2;
		vector<int> tmp;
		N x=query(2*node,start,mid,l,r),y=query(2*node+1,mid+1,end,l,r),z;
		for(int ind=0;ind<3;ind++){
            tmp.push_back(x.v[ind]);
		}
        for(int ind=0;ind<3;ind++){
            tmp.push_back(y.v[ind]);
		}
		sort(tmp.rbegin(),tmp.rend());
		z.v[0]=tmp[0];
		z.v[1]=tmp[1];
		z.v[2]=tmp[2];
		return z;
	}
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int i,j,n,tt,q,l,r,k;
 
		cin>>n;
		a.resize(n);
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		//memset(tree,0,sizeof(tree));
		build(1,0,n-1);
 
		/*for(k=0;k<50;k++){
			cout<<tree[k]<<" ";
		}*/
		cin>>q;
		while(q--){
                char type;
			cin>>type>>l>>r;
			l--;
			r--;
        if(type=='Q'){
            N ans=query(1,0,n-1,l,r);
			cout<<ans.v[0]+ans.v[1]<<endl;
        }
        else{
                r++;
                //cout<<"called";
            update(1,0,n-1,l,l,r);
        }
 
		}
		a.clear();
 
}
