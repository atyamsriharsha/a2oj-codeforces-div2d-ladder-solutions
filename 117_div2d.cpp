#include <bits/stdc++.h>
using namespace std ;

long long int check(string s,long long int a,string s1)
{
	for(long long int i=0;i<s.length();i++)
	{
		if(s[i]!=s1[i%a])
			return 0 ;	
	}
	return 1 ;
}

int main()
{
	string s1,s2 ;
	cin >> s1 >> s2 ;
	long long int ans = 0 ;
	long long int l1 = s1.length(),l2=s2.length() ;
	for(long long int i=1;i<=min(l1,l2);i++)
	{
		if(l1%i==0)
		{
			if(l2%i==0)
			{
				if(check(s1,i,s1))
				{
					if(check(s2,i,s1))
					{
						ans = ans+1 ;
					}
				}	
			}
		}
	}
	cout << ans << "\n" ;
	return 0 ;
}