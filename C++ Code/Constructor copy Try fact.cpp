#include<iostream>
using namespace std;
class cpy
{
    int var,fact;
    public:
    cpy(int m)
    {
        var=m;
    }
    double calculate()
    {
        fact=1;
        for(int i=1;i<=var;i++)
        {
            fact = fact * i;
        }
        return fact;
    }
};
int main()
{
    int n;
    cout<<"\n\tEnter the Number : ";
    cin>>n;
    cpy obj1(n);
    cpy obj2=obj1;
    cout<<"\n\t"<<n<<" Factorial for obj1  is:"<<obj1.calculate();
    cout<<"\n\t"<<n<<" Factorial for obj2 is:"<<obj2.calculate();
    return 0;
}
