# include <iostream>
using namespace std;
class a
{
public:
    void get ()
    {
        cout<<"HI A CLASS.";
    }
};
class b:public a
{
public:
    void get ()
    {
        cout<<"HI B CLASS.";
    }

};
int main ()
{
    b ob;
    ob.get();
    return 0;
}
