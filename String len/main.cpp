#include <iostream>
#include<string.h>
using namespace std;

void lc(char *a)
{
    int l=0,i=0;
    while(a[i]!='\0')
    {
        l++;
        i++;
    }
    cout<<l;
}
int main()
{
    char a[100];
    cin>>a;
    lc(a);
    return 0;
}
