#include <bits/stdc++.h>
using namespace std;
struct T{
	long long  l,r,v,t,lv,rv;
};
T tree[(long long )1e6+8];
vector<long long> a;
void build(long long  node,long long  start,long long  end){
     //cout<<start+1<<" &&&&&&&&&&&"<<end+1<<endl;
	if(start==end){
            //cout<<"leaf\n";
		tree[node].l=a[start];
		tree[node].r=a[start];
		tree[node].v=1;
		tree[node].lv=1;
		tree[node].rv=1;
		tree[node].t=1;
		//cout<<"strat "<<node<<" "<<end<<endl;
	}
	else{
		long long  mid=(start+end)/2;
		build(2*node,start,mid);
		build(2*node+1,mid+1,end);
		T& left=tree[2*node];
		T& right=tree[2*node+1];
		tree[node].t=left.t+right.t;
		tree[node].l=left.l;
		tree[node].r=right.r;
 {
 
				if(left.l==right.l){
					tree[node].lv=left.t+right.lv;
				}
				else{
					tree[node].lv=left.lv;
				}
				if(left.r==right.r){
                 //   cout<<"ghgggggggggggggggggggggggggggggggggggg"<<right.t<<" "<<left.r;
					tree[node].rv=right.t+left.rv;
                  //cout<<"bang"<<tree[node].rv<<endl;
				}
				else{
					tree[node].rv=right.rv;
				}
 
 
				if(left.r==right.l){
                       // cout<<"boom";
		 			tree[node].v=left.rv+right.lv;
				}
				tree[node].v=max(tree[node].v,max(left.v,right.v));
		}
       /* cout<<"*************\n";
		cout<<left.l<<" "<<left.r<<" "<<left.lv<<" "<<left.rv<<" "<<left.v<<" "<<left.t<<endl;
		cout<<right.l<<" "<<right.r<<" "<<right.lv<<" "<<right.rv<<" "<<right.v<<" "<<right.t<<endl;
		cout<<tree[node].l<<" "<<tree[node].r<<" "<<tree[node].lv<<" "<<tree[node].rv<<" "<<tree[node].v<<" "<<tree[node].t<<endl;
		cout<<"$$$$$$$$$$\n";*/
 
	}
 
}
T query(long long  node,long long  start,long long  end,long long  l,long long  r){
 
	if(end<l||start>r){
		T temp;
		temp.l=temp.r=INT_MIN;
		temp.v=temp.t=temp.lv=temp.rv=0;
		//cout<<"out\n";
		return temp;
 
	}
	else if(start>=l&&end<=r){
        //  cout<<"in\n";
		return tree[node];
	}
	else{
		long long  mid=(start+end)/2;
		T left=query(2*node,start,mid,l,r),right=query(2*node+1,mid+1,end,l,r);
		T z;
		z.v=0;
		z.l=left.l;
		z.r=right.r;
		z.t=left.t+right.t;
		if(left.l==INT_MIN){
            z.t=right.t;
            z.v=right.v;
            z.lv=right.lv;
            z.rv=right.rv;
            z.l=right.l;
            z.r=right.r;
		}
		else if(right.l==INT_MIN){
		    z.t=left.t;
            z.v=left.v;
            z.lv=left.lv;
            z.rv=left.rv;
            z.l=left.l;
            z.r=left.r;
		}
 
		else {
 
				if(left.l==right.l){
					z.lv=left.t+right.lv;
				}
				else{
					z.lv=left.lv;
				}
				if(left.r==right.r){
					z.rv=right.t+left.rv;
				}
				else{
					z.rv=right.rv;
				}
		}
		 if(left.r==right.l){
		 	z.v=left.rv+right.lv;
		}
		z.v=max(z.v,max(left.v,right.v));
 
 
 
 
			/*cout<<"*************\n";
			 cout<<start+1<<" &&&&&&&&&&&"<<end+1<<endl;
		cout<<left.l<<" "<<left.r<<" "<<left.lv<<" "<<left.rv<<" "<<left.v<<" "<<left.t<<endl;
		cout<<right.l<<" "<<right.r<<" "<<right.lv<<" "<<right.rv<<" "<<right.v<<" "<<right.t<<endl;
		cout<<z.l<<" "<<z.r<<" "<<z.lv<<" "<<z.rv<<" "<<z.v<<" "<<z.t<<endl;
		cout<<"$$$$$$$$$$\n";*/
		return z;
 
	}
}
 
 
 
int  main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
 
        while(1){
                long long  i,j,n,tt,q,l,r,k;
                cin>>n;
                if(n==0){
                    break;
                }
                for(int j=0;j<=6*n;j++){
 
                    tree[j].l=tree[j].r=0;
                    tree[j].v=tree[j].t=tree[j].lv=tree[j].rv=0;
                }
                cin>>q;
            a.resize(n);
            for(i=0;i<n;i++){
                cin>>a[i];
            }
            build(1,0,n-1);
            while(q--){
                cin>>l;
 
                cin>>r;
 
                l--;
                r--;
                cout<<query(1,0,n-1,l,r).v<<"\n";
 
            }
 
        }
        a.clear();
} 