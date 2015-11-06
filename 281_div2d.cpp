#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int n ;
	cin >> n ;
	if(n&01)
	{
		cout << "black\n" ;
	}
	else
	{
		cout << "white\n" ;
		cout << 1 << " " << 2 << "\n" ;
	}
	return 0 ;
}