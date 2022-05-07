#include<iostream>
using namespace std;
int main()
{
    int withdraw;
    int balence;
    cin>>withdraw;
    cin>>balence;
    if((withdraw%5==0) && (balence>=withdraw+0.50))
    {
        cout<<(balence-withdraw+0.50);
    }
    else{
        cout<<balence<<endl;
    }
}