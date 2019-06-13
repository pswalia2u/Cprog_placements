#include<iostream>
#include<string.h>
using namespace std;
class StringOperation
{
private:
string str;
public:
    StringOperation()
    {
        cout<<"Enter the string=";
        getline(cin,str);
    }
    StringOperation(string s)
    {
        this->str=s;
    }
    void show()
    {
        cout<<str;
    }
    void replac()
    {
        for(int i=0;i<this->str.length();i++)
        {
            if(this->str[i]=='a'||this->str[i]=='e'||this->str[i]=='i'||this->str[i]=='o'||this->str[i]=='u')
            {
                this->str[i]='_';
            }
        }
    }

};


int main()
{
    StringOperation o[3];
   // StringOperation s1[3];
    string name;
    for(int i=0;i<3;i++)
    {
        cout<<"Enter the name!";
        getline(cin,name);
        //StringOperation s1[i](name);
    }
    for(int i=0;i<3;i++)
    {
        o[i].show();
        cout<<"\t";
     //   s1[i].show();
    }
    for(int i=0;i<3;i++)
    {
        o[i].replac();
       // s1[i].replac();
    }
        for(int i=0;i<3;i++)
    {
        o[i].show();
        cout<<"\t";
     //   s1[i].show();
    }
    return 0;
}
