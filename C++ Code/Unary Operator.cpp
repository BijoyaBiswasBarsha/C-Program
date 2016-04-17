#include<iostream>
using namespace std;
class unaryop
{
private:
int a;
public:
    void getdata()
    {
        cout<<"Enter A Value For Negation :";
        cin>>a;
    }
    void display()
    {
        cout<<"After Negation : "<<a;
    }
    unaryop operator-()
    {
        a=-a;
    }
};

int main()
{
    unaryop op;
    op.getdata();
    -op;
    op.display();
return 0;
}
