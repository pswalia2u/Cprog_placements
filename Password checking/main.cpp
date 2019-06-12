#include <iostream>
#include<string.h>
using namespace std;
//len>8 , 1 spcial symbol ,1 no ==>perfect

//len>8 ,(0 spcial symbol ,1 no)or(1 spcial symbol ,0 no) ==>good

//len<8 ==>BAD
int main()
{
    char pwd[100];
    int len,ss,nos;
    len=0;
    ss=0;
    nos=0;
    cout<<"Enter the password!";
    cin>>pwd;
    len=strlen(pwd);
    //cout<<len;
    for(int i=0;i<len;i++)
    {
        if((pwd[i]=='1')||(pwd[i]=='2')||(pwd[i]=='3')||(pwd[i]=='4')||(pwd[i]=='5')||(pwd[i]=='6')||(pwd[i]=='7')||(pwd[i]=='8')
           ||(pwd[i]=='9')||(pwd[i]=='0'))
        {
            nos++;
        }
        if((pwd[i]=='!')||(pwd[i]=='@')||(pwd[i]=='#'))
        {
            ss++;
        }
    }
    if(len<8)
    {
        cout<<"BAD!\n";
    }
    else if((len>=8)&&(ss>=1)&&(nos>1))
    {
        cout<<"PERFECT!\n";
    }
    else{
        cout<<"GOOD!";
    }
    return 0;
}
