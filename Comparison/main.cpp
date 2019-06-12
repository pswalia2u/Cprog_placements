#include <iostream>
#include<string.h>
using namespace std;
int comp(char *a,char *b)
{

    if(strlen(a)==strlen(b))
    {
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i]==b[i])
            {
                //continue;
            }
        }

    }
    else
    {
        cout<<"Not Equal!";
    }

}
int main()
{
    char a[100],b[100];
    int h;
    cin>>a;
    cin>>b;
    h=comp(a,b);
    cout<<h;
    if(h==1)
    {
        cout<<a<<"TRUE"<<b;
    }
    else
    {
        cout<<a<<"FALSE"<<b;
    }
    return 0;
}
