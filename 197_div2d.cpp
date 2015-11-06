#include <bits/stdc++.h>
using namespace std ;
long long int tree[262151] ;
int main()
{
	long long int n,m ;
	bool flag1 = false ;
	cin >> n >> m ;
	long long int p= 1<<n ;
	for(long long int i=0;i<p;i++)
	{
		cin >> tree[p+i] ;
	}
	for(long long int i=n-1;i>=0;i--)
	{
		for(long long int j=(1<<i);j<(1<<(i+1));j++)
		{
			if(i%2==n%2)
			{
				tree[j]=tree[2*j]^tree[2*j+1] ;
			}
			else
			{
				tree[j]=tree[2*j]|tree[2*j+1] ;
			}
		}
	}
	long long int p1,b ;
	for(long long int i=0;i<m;i++)
	{
		cin >> p1 >> b ;
		p1 = p1+(1<<n)-1 ;
		tree[p1]=b ;
		p1 = p1 >> 1 ;
		flag1 = false ;
		while(p1)
		{
			if(flag1!=0)
			{
				tree[p1] = tree[2*p1]^tree[2*p1+1] ;
			}
			else
			{
				tree[p1] = tree[2*p1]|tree[2*p1+1] ;
			}
			flag1=!flag1 ;
			p1 = p1>>1 ;
		}
		cout << tree[1] << "\n" ;
	}
	return 0 ;
}