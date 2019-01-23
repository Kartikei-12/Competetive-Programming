//Author: Kartikei Mittal
//Poblem Link: https://www.codechef.com/problems/CODERLIF
#include<iostream>
#define cout std::cout
#define endl std::endl
int main(int argc, char const *argv[])
{
    int T;
    cin>>T;
    bool work = false;
    while(T--)
    {
        int ans=0;
        for(int j=0; j<30; ++j)
        {
            cin>>work;
            if(work == true || ans>5)
                ++ans;
            else
                ans = 0;
        }
        cout<<endl;
        if(ans>5)
            cout<<"#coderlifematters";
        else
            cout<<"#allcodersarefun";
        cout<<endl;
    }
    return 0;
}