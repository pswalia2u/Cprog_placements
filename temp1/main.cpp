#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    string name,add;
    for(int i=0;i<3;i++)
    {
        cout<<"\nEnter name:";
        getline(cin,name);
        cout<<"\nEnter Address:";
        cin.getline(add,5);
        cout<<endl<<name;
        cout<<endl<<add;
    }
    return 0;
}
