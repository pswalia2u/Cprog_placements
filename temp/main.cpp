#include <iostream>

using namespace std;

int main()
{
    int a=5;
    int *ptr;
    ptr=&a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;
    int b[5]={10,20,30,40,50};

    return 0;
}
