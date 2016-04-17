# include <iostream>
using namespace std;
class TIME
{
public:
    int hour,minit,second;
    void get ()
    {
        cout<<"\n\nEnter the value of Hour:";
        cin>>hour;
        cout<<"\nEnter the value of Minit:";
        cin>>minit;
        cout<<"\nEnter the value of Second:";
        cin>>second;

    }
    TIME operator + (TIME & p)
    {
        TIME cal;
        cal.hour=this->hour+p.hour;
        cal.minit=this->minit+p.minit;
        cal.second=this->second+p.second;
        if (cal.minit>=60)
        {
            cal.hour++;
            cal.minit=cal.minit%60;
        }
        if (cal.second>=60)
        {
          cal.minit++;
          cal.second=cal.second%60;
        }
        cout<<"\n\nThe Hour:"<<cal.hour<<"HOUR";
        cout<<"\n\nThe Minit:"<<cal.minit<<"MINIT";
        cout<<"\n\nThe Second:"<<cal.second<<"SECOND\n";

    }
};
int main ()
{
    TIME ob1,ob2,ob3;
    ob1.get ();
    ob2.get ();
    ob3=(ob1+ob2);
    return 0;

}


