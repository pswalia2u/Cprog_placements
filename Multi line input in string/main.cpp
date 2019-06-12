#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int vc=0;
    string r=" ",s;
    cout<<"Enter the lines!\n";

    while (r.length() != 0)
	{
        getline(cin,r);//it onlu works with string objects
	    s = s + " " + r;
    }
    for(int i=0;i<s.size();i++)
    if((s[i]=='i')||(s[i]=='o')||(s[i]=='a')||(s[i]=='e')||(s[i]=='u'))
    {
        vc++;
    }
    cout<<"No of vowvels!\n"<<vc;
    return 0;
}
