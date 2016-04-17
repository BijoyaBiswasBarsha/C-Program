#include<iostream>
using namespace std;
class cpy
{
    public:
    int m,n;
    cpy(int a,int b)
    {
        m=a;
        n=b;
    }

    int display()
    {
        return m*n;
    }
};
int main()
{
    cpy obj1(5,9);
    cpy obj2=obj1; //Copy Constructor

    cout<<"For obj1, m*n = "<<obj1.display();
    cout<<endl<<"For obj2, m*n = "<<obj2.display();
    return 0;
}
