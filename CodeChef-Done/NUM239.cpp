
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int64_t T, L, R, ans;
    cin>>T;
    while(T--)
    {
        ans = 0;
        cin>>L>>R;
        ++R;
        for(int64_t i=L; i<R; ++i)
        {
            a = i % 10;
            if(a==2 || a==3 || a==9)
                ++ans;
        }
        cout<<ans<<endl;
    }
    return 0;
}
