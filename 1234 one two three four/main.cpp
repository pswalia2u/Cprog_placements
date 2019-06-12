#include <iostream>
#include<string.h>
#include<sstream>
#include<cstdlib>
using namespace std;

int main()
{
    int no;
    string no1="";
    cout << "Enter the no.!\t" << endl;
    cin>>no;
    ostringstream str1;
    int rem;int rev=0;
    while(no!=0)
    {
        rem=no%10;
        rev=rev*10+rem;
        str1<<rem;
        //cout<<endl<<"DATA="<<str1.str();
        no1=str1.str();
        no=no/10;
    }
    cout<<"\n Rev="<<rev<<endl;
    while(rev!=0)
    {
        rem=rev%10;
        //cout<<rem;////rev=rev*10+rem
        switch(rem)
        {
            case 0:cout<<"zero\t";
                    break;
            case 1: cout<<"one\t";
            break;
            case 2: cout<<"two\t";
            break;
            case 3: cout<<"three\t";
            break;
            case 4: cout<<"four\t";
            break;
            case 5: cout<<"five\t";
            break;
            case 6: cout<<"six\t";
            break;
            case 7: cout<<"seven\t";
            break;
            case 8: cout<<"eight\t";
            break;
            case 9: cout<<"nine\t";
            break;
            default: cout<<"TATA BYEBYE!";
        }
        rev=rev/10;
    }
    cout<<endl;
    for(int i=0;i<no1.size();i++)
    {
        int no2=int(no1[i]-48);
        cout<<endl<<"NO2="<<no2;
        switch(no2)
        {
            case 0:cout<<"zero\t";
                    break;
            case 1: cout<<"one\t";
            break;
            case 2: cout<<"two\t";
            break;
            case 3: cout<<"three\t";
            break;
            case 4: cout<<"four\t";
            break;
            case 5: cout<<"five\t";
            break;
            case 6: cout<<"six\t";
            break;
            case 7: cout<<"seven\t";
            break;
            case 8: cout<<"eight\t";
            break;
            case 9: cout<<"nine\t";
            break;
            default: cout<<"TATA BYEBYE!";
        }
    }
    return 0;
}
