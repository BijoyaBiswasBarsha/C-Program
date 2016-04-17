#include <iostream>
using namespace std;
class Complex
{
public:
       int real;
       int imag;
       void Read()
        {
           cout<<"Enter real and imaginary number respectively:"<<endl;
           cin>>real>>imag;
        }
        Complex operator +(Complex & c)
        {
            Complex p;
            p.real=this->real+c.real;
            p.imag=this->imag+c.imag;
            cout<<"Sum="<<p.real<<"+"<<p.imag<<"i";
        }
};
int main()
{
    Complex c1,c2,c3;
    c1.Read();
    c2.Read();
    c3=(c1+c2);
    return 0;
}

