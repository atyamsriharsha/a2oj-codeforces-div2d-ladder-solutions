#include <bits/stdc++.h>
using namespace std ;
long long int n, m;
long long int k;
long long int calc(long long int x) 
{
    long long int ret = 0;
    for(long long int i=0;i<n;i++)
    { 
    	ret+=min(m,x/(i+1));
    }
    return ret;
}

int main() 
{ 
    cin >> n >> m >> k;
    long long int lo=0,hi=n*m;
    while(lo<hi) 
    {
        long long int mid = (lo+hi)>>1;
        if(calc(mid) >= k)
        { 
        	hi = mid;
        }
        else
        { 
        	lo = mid + 1;
        }
    }
    cout << lo << '\n';
    return 0;
}