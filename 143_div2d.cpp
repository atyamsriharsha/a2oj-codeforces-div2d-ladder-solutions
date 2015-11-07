#include <bits/stdc++.h>
using namespace std ;

int main()
{
	long long int ans = 0 ;
	long long int x,y,z ;
	cin >> x >> y >> z ;
	long long int x1,y1,z1 ;
	cin >> x1 >> y1 >> z1 ;
	long long int a[6] ;
	for(long long int i=0;i<6;i++)
	{
		cin >> a[i] ;
	}
	if(y<0)
	{
		ans+=a[0];
	}
    if(y>y1)
    {
    	ans+=a[1];
    }
    if(z<0)
    {
    	ans+=a[2];
    }
    if(z>z1)
    {
    	ans+=a[3];
    }
    if(x<0)
    {
    	ans+=a[4];
    }
    if(x>x1)
    {
    	ans+=a[5];
    }
    cout << ans << "\n" ;
	return 0 ;
}