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
    int n;
    cin>>n;
    int a[n];
    double sum=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
      sum+=a[i];
    }  
    sort(a,a+n);
    sum-=a[n-1];
    double d=((double)a[n-1]+(double)(sum/(n-1)));
    std::cout << std::fixed << std::setprecision(9) << d;
    cout<<"\n";
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





