#include<iostream>
using namespace std;
class Opera
{
private:
    int a;
public:
    void getdata()
    {
        cout<<"Enter A Value :";
        cin>>a;
    }
    Opera operator-()
    {
        a=-a;

    }
    Opera operator+(Opera c)
    {
        //op temp;
       c.a=this->a+c.a;
       return c;
    }
    void display()
    {
        cout<<"......................................"<<endl;
        cout<<"                ="<<a;
    }
};
int main()
{
    Opera A,B,C;
    A.getdata();
    B.getdata();
    -B;
    C=A+B;
    C.display();
    return 0;
}
