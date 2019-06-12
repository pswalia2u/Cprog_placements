#include <iostream>

using namespace std;
void fact(int no,int f,int i)
{
    if(i>0)
    {
        f=f*i;
        i--;
        fact(no,f,i);
    }
    else{
        cout<<"factorial="<<f;
    }
}
int main()
{
    int no;
    cout<<"Enter the no:";
    cin>>no;
     fact(no,1,no);
    return 0;
}
