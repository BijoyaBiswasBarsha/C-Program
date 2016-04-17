# include <iostream>
using namespace std;
template<class t>
class X
{
public:
    t x,y;
    void swp()
    {
        cout<<"\nENTER X & Y VALUES:";
        cout<<"\nX:";
        cin>>x;
        cout<<"\nY:";
        cin>>y;
        cout<<"\n\nBEFORE SWAPING VALUE IS"<<endl<<"X:"<<x<<"\n"<<"Y:"<<y;
        t temp=x;
        x=y;
        y=temp;
        cout<<"\n\nAFTER SWAPING VALUE IS"<<endl<<"X:"<<x<<"\n"<<"Y:"<<y;

    }
};
int main ()
{
    X<int>x1;
    x1.swp();
    X<float>x2;
    x2.swp();
    X<char>x3;
    x3.swp();
    return 0;

}

