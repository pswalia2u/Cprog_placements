#include <iostream>

using namespace std;

int main()
{
    int a,b,ce,co;
    ce=0;
    co=0;
    cout << "Enter the start point!\n";
    cin>>a;
    cout << "Enter the end point!\n";
    cin>>b;
    for(int i=a;i<=b;i++)
    {
        //cout<<i<<"\n";
        if(i%2==0)
        {
            ce++;
        }
        else
        {
            co++;
        }
    }
    cout<<"Even=\t"<<ce<<"\n"<<"Odd=\t"<<co;
    return 0;
}
