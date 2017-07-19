    #include <bits/stdc++.h>
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
    #define wh(t) while(t--)
    #define all(x) (x).begin(),(x).end()
    #define sz(a) a.size()
     
    #define MOD 1000000007
    bool flag;
    class node{
    public:
    	node* child[26];
    	bool isLeaf;
    };
    node* getNode(){
    	node* temp=new node;
    	temp->isLeaf=false;
    	for(int i=0;i<26;i++){
    		temp->child[i]=NULL;
    	}
    	return temp;
    }
    void insert(node* root,string s){
    	node* trav=root;
    	int index;
    	for(int i=0;i<s.size();i++){
    		index=s[i]-'a';
    		if(trav->child[index]==NULL){
    			trav->child[index]=getNode();  
    		}
    		trav=trav->child[index];
    	
    	}
    	trav->isLeaf=true;
    }
     
    int search(node* root,string s){
     
    	node* trav=root;
    	int index,i;
    	flag=1;
    	for( i=0;i<s.size();i++){
    		index=s[i]-'a';
    		//cout<<"found"<<s[i]<<""<<i<<endl;
    		if(trav->child[index]==NULL){
    		//	cout<<"r"<<i<<endl;
    			return i;
    		}
    		trav=trav->child[index];
    	}
    	flag=0;
    	return i-1;
    }
     
     
     
    int main()
    {
    	//ios_base::sync_with_stdio(false);
    	//cin.tie(NULL);
    	int t;
    	string s;
    	char ch; 
    	node* root=getNode();
    	std::vector<string> blocked;
    	map<string,bool> prefix;
    	cin>>t;
     
    	wh(t){
     
    		cin>>ch>>s;
    		if(ch!='+'){
    			blocked.pb(s);
    		}
    		else{
    			insert(root,s);
    		}
    	}
    	for(int i=0;i<blocked.size();i++){
    		int x=search(root,blocked[i]);
    		//cout<<"i am"<<x<<endl;
    		//cout<<x<<" "<<blocked[i].size()<<endl;
    		if((x==blocked[i].size()-1)&&(flag==0)){
    			
    			cout<<"-1";
    			return 0;
    		}
    		else{
    			string temp;
    			for(int j=0;j<=x;j++){
    				temp.pb(blocked[i][j]);
    			}
    		//	cout<<blocked[i]<<" "<<x<<temp<<endl;
    			prefix[temp]=true;;
    		}
    	}
    	//sort(all(prefix));
    	if(prefix.size()==0)
    			cout<<"-1";
    	else{	
    	cout<<prefix.size()<<endl;
    	for(auto x:prefix){
    		cout<<x.first<<endl;
    	}
    }
    	return 0;
    }
     
     
      
