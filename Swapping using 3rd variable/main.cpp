#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Input two vaiables!\n";
    cin>>a>>b;
    cout<<"Before Swapping!"<<a<<"\t"<<b<<"\n";
    c=a;
    a=b;
    b=c;
    cout<<"After swapping!"<<a<<"\t"<<b;
    return 0;
}
