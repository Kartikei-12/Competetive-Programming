#include <bits/stdc++.h>

using namespace std;

int main()
{
    int32_t T, k, n, sum, ans;
    int32_t aa[100000];

    cin>>T;

    while(T--)
    {
        sum = ans = 0;

        cin>>n>>k;
        for(int32_t i=0; i<n; ++i)
        {
            cin>>aa[i];
            sum += aa[i];
        }

        for(int32_t i = 0; i<n; ++i)
            if((aa[i]+k) > (sum-aa[i]))
                ++ans;
        cout<<ans<<endl;
    }
}
