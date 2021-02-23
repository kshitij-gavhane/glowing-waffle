

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    for(int i=0;i<int(a.size());i++)
    {
    
        //convert each character to its decimal representation
        int b=int(a[i]);
        vector<int> c;
        
        //convert from dec to bin
        while(b!=0)
        {
            c.push_back(b%2);
            b/=2;
        }
        
        //your name characters
        cout<<a[i]<<" = ";
        
        //completing the missing bits
        for(int j=0;j<int(8-c.size());j++)
            cout<<0;
        
        //the output
        for(int j=c.size()-1;j>=0;j--)
            cout<<c[j];
        cout<<"\n";
    }

    return 0;
}
