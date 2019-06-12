#include <iostream>

using namespace std;
void swp(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int main()
{
    int a=10,b=20;
    cout << "Before Swap!" << endl;
    cout<<"a="<<a<<"\tb="<<b;
    swp(&a,&b);
    cout << "\nAfter Swap!" << endl;
    cout<<"a="<<a<<"\tb="<<b;

    return 0;
}
