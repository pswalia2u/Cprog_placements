#include <iostream>

using namespace std;

int main()
{
    int a[3][3]={1,2,3,4,7,8,5,10,11};
    int b[3][3]={1,5,7,2,8,9,3,11,12};
    int c[3][3]={0};
    c[0][0]=a[0][0]+b[0][0];
    c[1][1]=a[1][1]+b[1][1];
    c[2][2]=a[2][2]+b[2][2];
    c[2][0]=a[2][0]+b[2][0];
    c[0][2]=a[0][2]+b[0][2];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
