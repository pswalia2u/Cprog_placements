#include <iostream>

using namespace std;
void asc(int a[],int siz)
{
    for(int i=0;i<siz;i++)
    {

    }
}
void dsc(int a[],int siz)
{
    cout<<a;
}
int main()
{
    int siz,choice;
    int no[100];
    while(true)
    {
        cout<<"Enter Size!\n";
        cin>>siz;
        if(siz>0&&siz<=100)
        {
            break;
        }
    }
    cout<<"Enter the elements!\n";
    for(int i=0;i<siz;i++)
    {
        cin>>no[i];
    }
    cout<<"Enter 1 for Ascending and 2 for Descending!\n";
    cin>>choice;
    switch(choice)
    {
        case 1:asc(no,siz);
        cout<<"asc";
        break;
        case 2:dsc(no,siz);
        cout<<"dsc";
        break;
        default:cout<<"Enter valid choice!!\n";
    }
    return 0;
}
