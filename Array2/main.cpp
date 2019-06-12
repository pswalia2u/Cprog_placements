#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int siz;
    cout<<"Enter the size!\n";
    cin>>siz;
    string name[siz],phone[siz];
    int marks[siz];

    for(int i=0;i<siz;i++)
    {
            cout<<"Enter name,phone and marks:\n";
            cin>>name[i]>>phone[i]>>marks[i];
    }
    cout<<"Details Entered!\n";
    for(int i=0;i<siz;i++)
    {
        cout<<name[i]<<"\t"<<phone[i]<<"\t"<<marks[i];
        cout<<endl;
    }
    string nam;
    cout<<"Enter name of person to update his/her details!\n";
    cin>>nam;
    for(int i=0;i<siz;i++)
    {
        if(nam==name[i])
        {   string no;
            int mark;
            cout<<"name found! \n Enter mob no and marks!\n";
            cin>>no;
            while(1)
            {
            if(no.size()!=10)
            {
                cout<<"Invalid Mob no. Enter again!\n";
                cin>>no;
            }
            else if(no.size()==10)
            {
                break;
            }
            }
            cout<<"Enter marks!";
            cin>>mark;
            phone[i]=no;
            marks[i]=mark;
        }
    }
    cout<<"Details after update!\n";
    for(int i=0;i<siz;i++)
    {
        cout<<name[i]<<"\t"<<phone[i]<<"\t"<<marks[i];
        cout<<endl;
    }
    return 0;
}
