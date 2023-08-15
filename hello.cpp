#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N '\n'
#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<ll>v[25009];
void solve(ll tst)
{
    ll n;
    cin>>n;
    ll ans=LLONG_MIN;
    for(ll i=n;i>=1;i--)
    {
        vector<ll>v;
        for(ll j=1;j<i;j++)
        {
            v.push_back(j);
        }
        for(ll j=n;j>=i;j--)
        {
            v.push_back(j);
        }
        ll sum=0;
        ll mx=LLONG_MIN;
        // for(auto it:v)
        // {
        //     cout<<it<<" ";
        // }
        //cout<<N;
        for(ll j=0;j<n;j++)
        {
            mx=max(mx,(j+1)*v[j]);
            sum+=(j+1)*v[j];
        }
        sum-=mx;
        ans=max(ans,sum);
    }
    cout<<ans<<N;
}
int main()
{
    Fast;
    ll t=1;
    cin>>t;
    ll tst=0;
    while(t--)
    {
        solve(++tst);
    }
}
