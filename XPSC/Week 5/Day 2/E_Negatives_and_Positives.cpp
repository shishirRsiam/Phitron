#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "nothing";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define loop(s,i,n) for(int i=s;i<n;i++)
#define code ios::sync_with_stdio(false);
#define shishirRsiam cin.tie(NULL);
using namespace std;



void testcase()
{
    int n; cin>>n;
    vec a(n);
    loop(0,i,n) cin>>a[i];

    sort(bee(a));
    loop(0,i,n-1)
    {
        if(a[i]<=0 and a[i+1]<=0)
        {
            a[i] *= -1;
            a[i+1] *= -1;
        }
        else if(a[i+1]<0 and a[i]<abs(a[i+1]))
        {
            a[i] *= -1;
            a[i+1] *= -1;
        }
        else if(a[i] < 0 and abs(a[i])>a[i+1])
        {
            a[i] *= -1;
            a[i+1] *= -1;
        }
    }
    ll sum = 0;
    for(int v:a) 
    {
        sum += v;
        // cout<<v<<" ";
    }
    cout<<sum<<"\n";
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 
        testcase();

    return 0;
}