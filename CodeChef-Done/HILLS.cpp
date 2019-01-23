//Author: Kartikei Mittal
//Poblem Link: https://www.codechef.com/problems/HILLS
#include<iostream>
#define cout std::cout
#define endl std::endl
int main()
{
    int T;
    cin>>T;
    
    int N = 0,pos = 1;
    int32_t U = 0,D = 0 ;
    bool Para = false,WantTo = true;
    while(T--)
    {
        cin>>N>>U>>D;
        int32_t H[N];
        for(int j=0; j<N; ++j)
            cin>>H[j];
        
        for(int j=0; j<(N-1) && WantTo==true; ++j)
            if( ((H[j+1] - H[j]) <= U) && ((H[j] - H[j+1]) <= D) )
                ++pos;
            else if( ((H[j] - H[j+1]) > D) && Para == false)
            {
                ++pos;
                Para=true;
            }
            else
                WantTo = false;
        cout<<endl<<pos;
        Para = false;
        WantTo = true;
        N = U = D = 0;
        pos = 1;
        cout<<endl;
    }
    return 0;
}