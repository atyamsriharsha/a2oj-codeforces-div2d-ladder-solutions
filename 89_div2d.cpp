#include <bits/stdc++.h>
using namespace std ;
const long long int mod1 = 1e8 ;
long long int a[101][101],b[101][101] ;
int main()
{
	long long int n1,n2,k1,k2 ;
	cin >> n1 >> n2 >> k1 >> k2 ;
	a[0][0] = 1 ;
	b[0][0] = 1 ;
	for(long long int i=0;i<=n1;i++)
	{
		for(long long int j=0;j<=n2;j++)
		{
			for(long long int r=1;r<=k1;r++)
			{
				if(r+i<=n1)
				{
					a[i+r][j]=(a[i+r][j]%mod1+b[i][j]%mod1)%mod1 ;
				}	
			}
			for(long long int r=1;r<=k2;r++)
			{
				if(r+j<=n2)
				{
					b[i][j+r]=(b[i][j+r]%mod1+a[i][j]%mod1)%mod1 ;
				}
			}
		}
	}
	cout << (a[n1][n2]%mod1+b[n1][n2]%mod1)%mod1 ;
	return 0 ;
}