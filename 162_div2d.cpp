#include <bits/stdc++.h>
using namespace std ;

long long int n;
vector<long long int> b[100010];
long long int f[100010];

void prec()
{
	for(long long int i=2;i<=100007;i++)
    {
        if(b[i].size()==0) 
        {
            for(long long int j=i;j<=100007;j+=i)
            {
                b[j].push_back(i);
            }
        }
    }
}

int main() 
{    
	string s = "atyam" ;
	cout << s.length() ;
    prec() ;
    cin >> n ;
    long long int a,tmp;
    for(long long int i=1;i<=n;i++) 
    {
        cin >> a ;
        tmp = 0;
        for(long long int j=0;j<b[a].size();j++)
        {
            tmp = max(tmp,f[b[a][j]]+1);
        }
        for(long long int j=0;j<b[a].size();j++)
        {
            f[b[a][j]] = max(f[b[a][j]],tmp);
        }
    }
    long long int ret = 1;
    for(long long int i=2;i<=100000;i++)
    {
        ret = max(ret,f[i]);
    }
    cout << ret << "\n" ;  
    return 0;
}