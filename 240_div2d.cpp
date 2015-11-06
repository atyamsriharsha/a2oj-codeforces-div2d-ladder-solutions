#include <bits/stdc++.h>
using namespace std ;
const long long int max1 = 2000+7 ;
const long long int mod1 = 1e9+7 ;
long long int dp[max1][max1] ;
int main() 
{
	long long int n,k;
	long long int ans = 0;
	cin >> n >> k;
	for(long long int i=1;i<=n;++i) 
	{
		dp[1][i] = 1;
	}
	for(long long int l=1;l<k;++l) 
	{
		for(long long int i=1;i<=n;++i) 
		{
			for(long long int j=i;j<=n;j+=i) 
			{
				dp[l+1][j] = (dp[l+1][j]%mod1+dp[l][i]%mod1)%mod1 ;
			}
		}
	}
	for(long long int i = 1; i <= n; ++i) 
	{
		ans = (ans%mod1+dp[k][i]%mod1)%mod1 ;
	}
	cout << ans << endl;
}