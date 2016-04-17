#include <iostream>
using namespace std;
class B{
    public:
      void display1()
         { cout<<"Content of base class.\n"; }
};
class D1 : virtual public B{
    public:
       void display2()
         { cout<<"Content of first derived class.\n"; }
};
class D2 : virtual public B{
    public:
       void display3()
         { cout<<"Content of second derived class.\n"; }
};
class C : public D1,public D2{
    public:
       void display4()
         { cout<<"Content of Last derived class.\n"; }
};
int main()
{
    C co;
    co.display1(); //i can call base class in diamond shaped structure
    return 0;
    }

