#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb push_back
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;


/*Time   :   00:15:47
Date  	 :   08-06-2024
Author   :   shishirRsiam
File  	 :   B_Sets_and_Union.cpp*/


bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    int x,n,val; cin>>x;
    set<int>st;
    map<int,vector<int>>mp;
    loop(1,ii,x+1)
    {
        cin>>n;
        loop(0,i,n)
        {
            cin>>val;
            st.insert(val);
            mp[ii].pb(val);
        }
    }
    
    int ans = 0;
    for(auto val:st)
    {
        set<int>temp;
        for(auto [a, vect]:mp)
        {
            bool flag = true;
            for(auto ops:vect)
            {
                if(ops == val)
                {
                    flag = false;
                    break;
                }
            }
            if(flag) 
                for(auto huh:vect) temp.insert(huh);
        }
        if(temp.size() < st.size())
            ans = max(ans, int(temp.size()));
    }
    cout<<ans<<by 
    return true;
}

int main()
{
    code by shishirRsiam

    int testcase; cin>>testcase; while(testcase--) 

        _solve_koro_taratari__aro_solve_korte_hobe();

    return 0;
}