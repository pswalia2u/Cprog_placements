#include <iostream>
#include<string.h>
using namespace std;
struct Student
{
private:
    string name,ph;
    int rno,marks;
public:
    void inserrt()
    {
        cout<<"Enter the name:"<<endl;
        cin>>name;
        cout<<"Enter the phone no:"<<endl;
        cin>>ph;
        cout<<"Enter the rno:"<<endl;
        cin>>rno;
        cout<<"Enter the marks:"<<endl;
        cin>>marks;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Phone no:"<<ph<<endl;
        cout<<"Roll no:"<<rno<<endl;
        cout<<"Marks:"<<marks<<endl;
        cout<<endl;
    }
    void searchh(string name)
    {
        int tm;
        if(this->name==name)
        {
            cout<<"Enter the marks to update:";
            cin>>tm;
            this->marks=tm;
        }
        else
        {
            cout<<"Name not found!"<<endl;
        }
    }
};
int main()
{
    Student A[3];
    for(int i=0;i<3;i++)
    {
        A[i].inserrt();
    }
    for(int i=0;i<3;i++)
    {
        A[i].display();
    }
    A[0].searchh("ps");
    cout<<"After updation!";
    for(int i=0;i<3;i++)
    {
        A[i].display();
    }

    return 0;
}
