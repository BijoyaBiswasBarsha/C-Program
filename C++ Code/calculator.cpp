# include <iostream>
using namespace std;
class Input
{
public:
    int x,y;
    void show ()
    {
        cout<<"1.ADDITION";
        cout<<"\n2.SUBTRACTION";
        cout<<"\n3.MULTIPLICATION";
        cout<<"\n4.DIVISION";
        cout<<"\n\nEnter 2 numbers for x & y:";
        cout<<"\n\n  x :";
        cin>>x;
        cout<<"\n\n  y :";
        cin>>y;
    }
};
class Calculate:public Input
{
public:
    int result;
    void Add ()
    {
        result=x+y;
        cout<<"\n\nADDITION RESULT:"<<result;
    }
    void Sub ()
    {
        result=x-y;
        cout<<"\n\nSUBTRACTION RESULT:"<<result;
    }
    void Mul ()
    {
        result=x*y;
        cout<<"\n\nMULTIPLICATION RESULT:"<<result;
    }
    void Div ()
    {
        result=x/y;
        cout<<"\n\nDIVISION RESULT:"<<result;
    }

};
int main ()
{
    int n;
    Calculate ob;
    ob.show ();
    cout<<"\n\nInput your choice:";
    cin>>n;
    switch (n)
    {
    case 1:
        ob.Add ();
        break;
    case 2:
        ob.Sub ();
        break;
    case 3:
        ob.Mul ();
        break;
    case 4:
        ob.Div ();
        break;
    }
    return 0;
}
