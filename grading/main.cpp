#include <iostream>

using namespace std;

int main()
{
    int maths,phy,chem,eng,hindi;
    float per,sum;
    cout<<"Enter the marks in order maths,phy,chem,eng,hindi!\n";
    cin>>maths>>phy>>chem>>eng>>hindi;
    sum=maths+phy+chem+eng+hindi;
    //cout<<sum;
    per=(sum/500)*100;
    cout<<"Percentage="<<per<<"\n";
    cout<<"Grade=\n";
    if((per>=70&&per<=75)||(per>75))
    {
            cout<<"A+";
    }
    else if(per>=68&&per<=70)
    {
            cout<<"A";
    }
    else if(per>=65&&per<=68)
    {
            cout<<"B+";
    }
    else if(per>=60&&per<=65)
    {
            cout<<"B";
    }
    else if(per<60)
    {
        cout<<"C";
    }
    return 0;
}
