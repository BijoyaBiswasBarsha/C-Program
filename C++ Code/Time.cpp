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
    void clock (TIME p1,TIME p2)
    {
        int cal1,cal2,cal3;
        cal1=p1.hour+p2.hour;
        cal2=p1.minit+p2.minit;
        cal3=p1.second+p2.second;
        if (cal2>=60)
        {
            cal1++;
            cal2=cal2%60;
        }
        if (cal3>=60)
        {
          cal2++;
          cal3=cal3%60;
        }
        cout<<"\n\nThe Hour:"<<cal1<<"HOUR";
        cout<<"\n\nThe Minit:"<<cal2<<"MINIT";
        cout<<"\n\nThe Second:"<<cal3<<"SECOND\n";

    }
};
int main ()
{
    TIME ob1,ob2,ob3;
    ob1.get ();
    ob2.get ();
    ob3.clock (ob1,ob2);
    return 0;

}

