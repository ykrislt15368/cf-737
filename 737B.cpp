/*.........................*
 *..................___....*
 *.../|...../|...../...\...*
 *../.|..../.|..../........*
 *....|......|...|.........*
 *....|......|..|..___.....*
 *....|......|..|./...\....*
 *....|......|..|/.....\...*
 *....|......|..\...../....*
 *..__|__..._|_..\___/.....*
 *.........................*
 */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define re return
#define pii pair<int,int>
#define push_back pb
void solve()
{
    int n,k;
    cin>>n>>k;
    ll a[n];
    ll b[n];
    unordered_map<ll, int> mp;
    ll sum=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
      b[i]=a[i];
    }
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        mp[b[i]]=i;
    }
    for(int i=1;i<n;i++)
    {
        if(a[i-1]<a[i])
        {
            if(mp[a[i]]-1-mp[a[i-1]]>0) sum++;
            else continue;
        }
        else sum++;
        
    }
    sum+=1;
    if(k>=sum) cout<<"Yes\n";
    else cout<<"No\n";
    re;
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t-->0)
      solve();
    re 0;  
}





