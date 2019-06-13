#include <iostream>

using namespace std;

int main()
{
    int ct,in ;
    cout<<"Enter the count=";
    cin>>ct;
    cout<<"Enter the no of intervals=";
    cin>>in;
    int a[in][2];
    cout<<endl<<"Enter the interval=";
    for(int i=0;i<in;i++)
    {
        for(int j=0;j<2;j++)
            cin>>a[i][j];
    }
    for(int i=0;i<in;i++)
    {
        for(int j=0;j<2;j++)
            cout<<a[i][j];
        cout<<endl;
    }
    for(int i=0;i<ct;i++)
    {
        int t;
        cout<<"\nEnter the arrival timing:";
        cin>>t;
        if(t>a[in-1][1])
            cout<<"\nERROR !!!!";
        else
        {
            for(int j=0;j<in;j++)
            {
                int flag=0;
                for(int k=0;k<2;k++)
                {
                    int start,endpt;

                    if(k==0)
                    {
                        start=a[j][k];
                        endpt=a[j][k+1];
                        cout<<"\n Start Time:"<<start;
                        cout<<"\n End Time:"<<endpt;
                        if(t>=start && t<endpt)
                        {
                            cout<<"\n No Wait !!!";
                            flag=1;
                        }
                        else if(t<start)
                        {
                            cout<<"\n Wait for:"<<start-t;
                            flag=1;
                        }
                        else if(t==endpt)
                        {
                            cout<<"\n Wait for:"<<(a[j+1][k]-t);
                            flag=1;
                        }

                    }

                }
                if(flag==1)
                    break;
            }
        }
    }
    //cout<<in[in][1];
    return 0;
}
