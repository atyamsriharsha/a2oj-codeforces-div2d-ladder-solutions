#include <bits/stdc++.h>
using namespace std ;
int main()
{ 
	long long l,r ;
	cin >> l >> r ;
	if(l==1 && r==1)
		cout << 0 ;
	else
		cout << ((1LL<<(64-__builtin_clzll(l^r)))-1LL) ;
}