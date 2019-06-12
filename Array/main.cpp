#include <iostream>
using namespace std;
int largest(int a[],int siz)
{
    int l=0;
    for(int i=0;i<siz;i++)
    {
        if(l<a[i])
        {
            l=a[i];
        }
    }
    return l;
}
int smallest(int a[],int siz)
{
    int s;
    for(int i=0;i<siz;i++)
    {   s=a[i];
        if(a[i]<s)
        {
            continue;
        }
        else{s=a[i];}
    }
    return s;
}
void asc(int a[],int siz)
{
    for(int i=0;i<siz;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]<a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<siz;i++)
    {
        cout<<a[i]<<" ";
    }
}
void dsc(int a[],int siz)
{
    for(int i=0;i<siz;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j])
            {   int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<siz;i++)
    {
        cout<<a[i]<<" ";
    }
}
void searching(int a[],int siz)
{
    int s;
    char c;
int i;
    for( i=0;i<siz;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nEnter Element to be searched!\n";
    cin>>s;
    for( i=0;i<siz;i++)
    {
        if(a[i]==s)
        {
            cout<<"Element Found at index=\t";
            cout<<i;
            cout<<"\nDo you want to update element?Press Y for updating.\n";
            cin>>c;
            if(c=='Y'||c=='y')
            {   int temp;
                cout<<"Enter element:";
                cin>>temp;
                a[i]=temp;
            }
        }
    }
    cout<<"Array after searching=\n";
    for(int i=0;i<siz;i++)
    {
        cout<<a[i]<<"\t";
    }

}
int main()
{
    int siz,l,s;
    cout<<"Enter the size of array!\n";
    cin>>siz;

    int a[siz];
    cout<<"Enter the array!\n";
    for(int i=0;i<siz;i++)
    {
        cin>>a[i];
    }
    l=largest(a,siz);
    s=smallest(a,siz);
    cout<<"largest="<<l<<endl;
    cout<<"smallest="<<s<<endl;
    cout<<"\n Ascending Order:";
    asc(a,siz);
    cout<<endl;
    cout<<"\nDescending Order:";
    dsc(a,siz);
    searching(a,siz);

    return 0;
}
