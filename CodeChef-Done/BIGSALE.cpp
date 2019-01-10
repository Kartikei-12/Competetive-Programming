//Author: Kartikei Mittal
//Poblem Link: https://www.codechef.com/problems/BIGSALE
#include<iostream>
#include<iomanip>
#define cout std::cout
#define endl std::endl
int main()
{
    size_t T;
    std::cin>>T;
    size_t num, quantity, dis;
    double price;
    while(T--)
    {
        long double loss = 0;
        std::cin>>num;
        while(num--)
        {
            std::cin>>price>>quantity>>dis;
            loss += (price*dis*dis*quantity*1.0)/10000.0; 
        }
        cout<<endl<<std::fixed<<std::showpoint<<std::setprecision(6)<<loss;
    }
    return 0;
}