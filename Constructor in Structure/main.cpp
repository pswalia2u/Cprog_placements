#include <iostream>
using namespace std;

struct Constructor
{   private:
    int a,b;
    public:
    Constructor()
    {
        cout<<"Default Constructor!";
    }
    Constructor(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void display()
    {
        cout<<"a:"<<a<<endl;
        cout<<"b:"<<b<<endl;
    }
};
int main()
{
    struct Constructor c1;
    //struct Constructor c2(10,20);
    struct Constructor c2=Constructor(10,20);
    c2.display();
    c2=Constructor(30,40);
    c2.display();

    return 0;
}
