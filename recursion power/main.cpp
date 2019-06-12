#include <iostream>
#include<string.h>
using namespace std;
void power(int b,int id,int i,int p)//do not create any variable in recursive function ,pass them as arguments
{
    if(i>0)
    {
        p=p*b;
        i--;
        power(b,id,i,p);
    }
    else
    {
        cout<<"Power="<<p;
    }
}
int main()
{
 int base,index;
 cout<<"Enter the base=";
 cin>>base;
 cout<<"Enter the index=";
 cin>>index;
 power(base,index,index,1);
    return 0;
}
