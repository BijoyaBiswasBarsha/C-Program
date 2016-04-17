# include <iostream>
using namespace std;
class B
{
public:
    virtual void display ()
    {
        cout<<"\n\nHI I AM BASE CLASS."<<endl;
    }
};
class D1:public B
{
public:
    void display ()
    {
        cout<<"\n\nHI I AM FIRST DERIVED CLASS.";
    }
};
class D2:public B
{
public:
    void display ()
    {
        cout<<"\n\nHI I AM SECOND DERIVED CLASS."<<endl;
    }
};
int main ()
{
    B *b;
    D1 d1;
    D2 d2;
    b=&d1;
    b->display();
    b=&d2;
    b->display();
    return 0;
}
