# include <iostream>
using namespace std;
class flight
{
public:
    int flightno;
    char source[10];
    char destination[10];
    float distance;
    flight ()
    {
        cout<<"ENTER FLIGHT NO:";
        cin>>flightno;
        cout<<"ENTER SOURCE:";
        cin>>source;
        cout<<"ENTER DESTINATION:";
        cin>>destination;
        cout<<"ENTER DISTANCE:";
        cin>>distance;
    }
    void display ()
    {
        cout<<"\n\nFLIGHT NUMBER:"<<flightno<<endl;
        cout<<"SOURCE:"<<source<<endl;
        cout<<"DESTINATION:"<<destination<<endl;
        cout<<"DISTANCE:"<<distance<<endl;
    }
};
int main ()
{
    flight ob1;
    flight ob2=ob1;
    ob2.display();
    return 0;
}
