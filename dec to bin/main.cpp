#include <iostream>

using namespace std;

int main()
{
    int no;int r;
    cout << "Enter the no.";
    cin>>no;
    int a[100];
    int i=0;
    while(no!=0)
    {
        r=no%2;
        no=no/2;
        a[i]=r;
        i++;
    }
    for(int j=i-1;j!=-1;j--)
    {
        cout<<a[j];
    }
    return 0;
}
