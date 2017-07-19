    #include<iostream>
    using namespace std;
    int main()
    {
      long long int t,m,n,c,tmp=0,i,j,sw;
        cin>>t;
        while(t--)
        {
            tmp=0;
            cin>>m>>n>>c;
            if(c>n*m)
                cout<<"0\n";
            else
            {
                    if(m>n)
                        swap(m,n);
             for(i=1;i*i<=c;i++)
            {
                if(c%i==0&&(i<=m&&c/i<=n))
                {
                  // cout<<i<<" "<<c/i<<endl;
                    if(i!=c/i&&(i<=n&c/i<=m)){
                        tmp++;
                    }
                    tmp++;
                }
            }
 
            cout<<tmp<<"\n";
            }
 
            
            
        }
    }  
