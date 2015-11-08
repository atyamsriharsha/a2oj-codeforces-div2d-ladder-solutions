#include <bits/stdc++.h>
using namespace std;

vector<long long int> prefix;
long long int maxs=-1;
void prefixfunc(string s)
{
    long long int n=s.size();
    prefix.resize(n);
    prefix[0]=0;
    long long int i=1,prev=0;
    while(i<n)
    {
        if(s[i]==s[prev])
        {
            prefix[i]=prev+1;
            prev++;
            i++;
        }
        else
        {
            if(prev==0)
            {
                prefix[i]=0;
                i++;
            }
            else
            {
                prev=prefix[prev-1];
            }
        }
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    string s;
    cin >> s;
    prefixfunc(s);
    if(prefix[s.size()-1]==0)
    {
        cout<<"Just a legend";
    }
    else
    {
        if(find(prefix.begin(),prefix.end()-1,prefix[s.size()-1])!=prefix.end()-1)
        {
            cout << s.substr(0,prefix[s.size()-1]);
        }
        else
        {
            long long int k=prefix[s.size()-1];
            k=prefix[k-1];
            cout << s.substr(0,k);
            if(k==0)
            {
                cout<<"Just a legend";
            }
        }
    }   
    return 0 ;
}