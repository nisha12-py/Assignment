#include<iostream>
using namespace std;

class AddAmount
{
public:
    int amount = 50;
    
    AddAmount()
    {
        amount+=0;    
        cout<<"\nConstructor 1 - "<<amount;
    }
    AddAmount(int amt)
    {
        amount+=amt;
        cout<<"\nContructore 2 - "<<amount;
    }
};

int main()
{
    int n;
    cin>>n;
    AddAmount ad, ad1(n);
}