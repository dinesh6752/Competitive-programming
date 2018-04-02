#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
	bool isLeaf;
	int count;
	map<int,node*> child;
};

node* getNode(){


	node* temp=new node;
	temp->isLeaf=0;
	temp->count=0;
	return temp;
	
}
void insert(node* root,string s){

	node*  trav=root;
	for(int i=0;i<s.size();++i){
		int index=s[i];
		if(trav->child[index]==NULL){
			trav->child[index]=getNode();
		}
		trav=trav->child[index];
		trav->count++;
	}
	trav->isLeaf=1;
}
int search(node* trav,string s){
	for(int i=0;i<s.size();++i){
		int index=s[i];
		if(trav->child[index]==NULL)
			return 0;
		trav=trav->child[index];
	}
	assert(trav!=NULL);
	return trav->count;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,q;
	cin>>n>>q;
	//vector<string> a;
	node* root=getNode();
	for(int i=0;i<n;++i){
		string x;
		cin>>x;
		insert(root,x);
	}
	while(q--){
		string x;
		cin>>x;
		cout<<search(root,x)<<"\n";
	}
}