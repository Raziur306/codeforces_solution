#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>> n>> m>> k;
    bitset<32> a[m+1];
    for(int i=0; i<m+1; i++)
    {
        int x;
        cin>> x;
        a[i]=x;
    }
    int ans=0;
    for(int i=0; i<m; i++)
    {
        int diff=0;
        for(int j=0; j<32; j++)
        {
            if(a[m][j]!=a[i][j])
            {
                diff++;
            }
        }
        if(diff<=k)
        {
            ans++;
        }
    }
    cout<< ans<< endl;
 
 
    return 0;
}
