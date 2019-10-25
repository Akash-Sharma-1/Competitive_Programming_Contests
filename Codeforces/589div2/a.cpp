#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif 
    int l=0;
    int r=0;
    cin>>l>>r;
    vector<int> n;

    int x=l;
    int f=0;
    while (x<=r)
    {
       int i=x;
       while(i!=0)
       {
            n.push_back(i%10);
            i=i/10;
       }
        f=0;
       for(int j=0;j<n.size();j++)
       {
           for(int k=j+1;k<n.size();k++)
           {
               if(n[j]==n[k])
               {
                   f=1;
                   break;
               }
           }
           if(f==1)
           {
               break;
           }
       }
        
        n.clear();
       if(f==0)
       {
           f=-1;
           break;
       }
       x++;
    }

    if(f==-1)
    {
        cout<<x<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    


    
}