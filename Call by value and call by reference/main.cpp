#include <iostream>

using namespace std;

    void cbv(int a,int b)//call by value
    {
        a++;
        b++;
        cout<<a<<" "<<b;
    }
    void cbr(int *a,int *b)
    {
        *a=(*a)+1;
        *b=(*b)+1;
        cout<<*a<<" "<<*b;
    }
int main()
{

    int a=10;
    int b=20;
    cbv(a,b);//call by value
    //cbr(&a,&b);//call by ref
    cout<<a<<" "<<b;
    return 0;
}
