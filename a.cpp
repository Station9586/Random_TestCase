//ANMHLIJKTJIY!
#pragma GCC optimize(2)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline","fast-math","unroll-loops","no-stack-protector")
#pragma GCC diagnostic error "-fwhole-program"
#pragma GCC diagnostic error "-fcse-skip-blocks"
#pragma GCC diagnostic error "-funsafe-loop-optimizations"
#include <bits/stdc++.h>
#define INF 1000000000
#define LINF 1000000000000000000
#define MOD 1000000007
#define mod 998244353
#define F first
#define S second
#define ll long long
#define N 400010
using namespace std;
struct BIT{
    ll val[N];
    void upd(ll x,ll v)
    {
        ++x;
        while(x<N)
        {
            val[x]+=v;
            x+=x&(-x);
        }
        return;
    }
    ll qry(ll x)
    {
        ll ret=0;
        ++x;
        while(x)
        {
            ret+=val[x];
            x-=x&(-x);
        }
        return ret;
    }
}bit1,bit2;
ll n,a[N],ans=0;
int main(){
    ll i;
    vector<ll> allv;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        allv.push_back(a[i]);
    }
    sort(allv.begin(),allv.end());
    allv.erase(unique(allv.begin(),allv.end()),allv.end());
    for(i=0;i<n;i++)
    {
        ll x=lower_bound(allv.begin(),allv.end(),a[i])-allv.begin();
        ans+=bit1.qry(x)*a[i]-bit2.qry(x);
        bit1.upd(x,1);
        bit2.upd(x,a[i]);
    }
    printf("%lld\n",ans);
    return 0;
}