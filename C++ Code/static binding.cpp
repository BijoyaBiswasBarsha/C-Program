# include <iostream>
using namespace std;
class B
{
public:
      void display ()
    {
        cout<<"\n\nHI I AM BASE CLASS."<<endl;
    }
};
class D:public B
{
public:
    void display ()
    {
        cout<<"\n\nHI I AM DERIVED CLASS.";
    }
};

int main ()
{
    B *b;
    D d;
    b->display();
    b=&d;
    b->display();
    return 0;
}

