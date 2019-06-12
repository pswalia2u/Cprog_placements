#include <iostream>

using namespace std;

int main()
{
    int p,n;
    float r,si;
    cout<<"Enter Payment,time period and rate!\n";
    cin>>p>>n>>r;
    si=(p*n*r)/100;
    cout<<"Simple Interest="<<si;
    return 0;
}
