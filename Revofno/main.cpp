#include <iostream>

using namespace std;

int main()
{
    int no;
    cin>>no;
    int rem;int rev=0;
    while(no!=0)
    {
        rem=no%10;
        cout<<rem;////rev=rev*10+rem;
        no=no/10;
    }
    //cout<<rev;
    return 0;
}
