#include <bits/stdc++.h>
using namespace std ;
const long long int mod1 = 1e8 ;
long long int a[101][101][2] ;
int main()
{
	long long int n1,n2,k1,k2 ;
	cin >> n1 >> n2 >> k1 >> k2 ;
	a[0][0][0] = 1 ;
	a[0][0][1] = 1 ;
	for(long long int i=0;i<=n1;i++)
	{
		for(long long int j=0;j<=n2;j++)
		{
			for(long long int r=1;r<=k1;r++)
			{
				if(i+r<=n1)
				{
					a[i+r][j][0] = (a[i+r][j][0]%mod1+a[i][j][1]%mod1)%mod1 ;
				}
			}
			for(long long int r=1;r<=k2;r++)
			{
				if(j+r<=n2)
				{
					a[i][j+r][1] = (a[i][j+r][1]%mod1+a[i][j][0]%mod1)%mod1 ;
				}
			}
		}
	}
	cout << (a[n1][n2][0]%mod1+a[n1][n2][1]%mod1)%mod1 ;
	return 0 ;
}