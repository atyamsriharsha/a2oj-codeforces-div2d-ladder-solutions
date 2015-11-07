#include <bits/stdc++.h>
using namespace std ;
long long int n,m;
std::vector<long long int>gr[3000];
bool used[3001];
long long int d[3001];

void dfs(long long int v,long long int len)
{
    if(len==2)
    {
        d[v]++;
        return;
    }
    for(long long int i=0;i<gr[v].size();i++)
    {
        if(used[gr[v][i]]==0)
        {
            dfs(gr[v][i],len+1);
        }
    }
}

int main()
{
    cin >> n >> m;
    for(long long int i=0;i<m;i++)
    {
        long long int a,b;
        cin >> a >> b;
        a--;
        b--;
        gr[a].push_back(b);
    }
    long long int ans = 0;
    for(long long int i=0;i<n;i++)
    {
        for(long long int j=0;j<n;j++)
        {
            d[j] = 0;
        }
        dfs(i,0);
        for(long long int j=0;j<n;j++)
        {
            if(j!=i)
            {
            	ans += d[j]*(d[j]-1)/2;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}