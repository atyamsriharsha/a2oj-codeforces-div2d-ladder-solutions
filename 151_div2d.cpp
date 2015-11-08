#include <bits/stdc++.h>
using namespace std ;
std::vector<long long int> colours;
std::set<long long int> ans[100001] ;
int main()
{
	long long int n,m,temp,temp1,temp2 ;
	cin >> n >> m ;
	colours.push_back(0) ;
	long long int res1 = 1e5+7 ;
	for(long long int i=0;i<n;i++)
	{
		cin >> temp ;
		res1 = min(res1,temp) ;
		colours.push_back(temp) ;
	}
	for(long long int i=0;i<m;i++)
	{
		cin >> temp1 >> temp2 ;
		if(colours[temp1]!=colours[temp2])
		{
			ans[colours[temp1]].insert(colours[temp2]) ;
			ans[colours[temp2]].insert(colours[temp1]) ;
		}
	}
	long long int res = 0 ;
	long long int final = 0,flag1=0 ;
	for(long long int i=0;i<=100001;i++)
	{
		if(ans[i].size()>res)
		{
			res = ans[i].size() ;
			final  = i ;
			flag1 = 1 ;
		}
	}
	if(flag1==1)
	{
		cout << final << "\n" ;
	}
	else
	{
		cout << res1 << "\n" ;
	}
	return 0 ;
}