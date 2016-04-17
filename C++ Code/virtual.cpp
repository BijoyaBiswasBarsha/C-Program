# include<iostream>
using namespace std;
class base
{
public:
    virtual void show ()
    {
        cout<<"SHOW BASE"<<endl;
    }
    void display ()
    {
        cout<<"DISPLAY BASE"<<endl;
    }
};
class derived:public base
{
public:
    void show ()
    {
        cout<<"SHOW DERIVED"<<endl;
    }
    void display ()
    {
        cout<<"DISPLAY DERIVED"<<endl;
    }

};
int main ()
{
    base b;
    derived d;
    base*ptr;
    ptr=&b;
    cout<<"BASE POINTER:"<<endl;
    ptr->show();
    ptr->display();
    ptr=&d;
    cout<<"\nDERIVED POINTER:"<<endl;
    ptr->show();
    ptr->display();
    cout<<"\nBASE OBJECT:"<<endl;
    b.show();
    b.display();
    cout<<"\nDERIVED OBJECT:"<<endl;
    d.show();
    d.display();
    return 0;
}
