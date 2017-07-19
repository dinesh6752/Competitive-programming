#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    vector<int> a;
    cin>>t;
    int x;
    for(int i=0;i<t;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
 
     for(int i=0;i<t;i++)
    {
 
        cout<<a[i]<<endl;
    }
} 
