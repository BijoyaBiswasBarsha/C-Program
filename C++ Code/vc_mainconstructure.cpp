#include <iostream>
using namespace std;
class B{
    public:
      B()
         { cout<<"Content of base class.\n"; }
};
class D1 : virtual public B{
    public:
       D1()
         { cout<<"Content of first derived class.\n"; }
};
class D2 : virtual public B{
    public:
       D2()
         { cout<<"Content of second derived class.\n"; }
};
class C : public D1,public D2{
    public:
       C()
         { cout<<"Content of Last derived class.\n"; }
};
int main(){
    C co; //i can call constructor in diamond shaped structure
    return 0;
    }

