#include <bits/stdc++.h>
using namespace std ;
long long int ans[6] ;
int main()
{
	long long int n,A[100005],B[5] ;
	cin >> n;
	for(long long int i=0;i<n;i++)
	{
		cin >> A[i];
	}
	for(long long int i=0;i<5;i++)
	{
		cin >> B[i];
	}
	long long int sum1=0;
	for(long long int i=0;i<n;i++)
	{
		sum1+=A[i];
		for(long long int j=4;j>=0;j--)
		{
			if(sum1>=B[j])
			{
				ans[j]+=sum1/B[j];
				sum1-=(sum1/B[j])*B[j];
			}
		}
	}
	for(long long int i=0;i<5;i++)
	{
		cout << ans[i] << " ";
	}
	cout << endl << sum1 << endl;
	return 0 ;
}