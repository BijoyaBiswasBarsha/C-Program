#include<iostream>
using namespace std;
class student
{
private:
    int id;
    char name[10];
    char dept[10];
    float cgpa;
public:
    void get()
    {
        cout<<"\n\nEnter id : ";
        cin>>id;
        cout<<"\nEnter name : ";
        cin>>name;
        cout<<"\nEnter department : ";
        cin>>dept;
        cout<<"\nEnter cgpa : ";
        cin>>cgpa;
    }
    void display()
    {
        cout<<"\nid : "<<id<<endl<<"Name : "<<name<<endl<<"Department : "<<dept<<endl<<"CGPA : "<<cgpa;
    }
};
int main()
{
    int i;
    student ob[5];
    for(i=0;i<5;i++)
    {
        ob[i].get();
    }
    cout<<"\n\n\t........You have entered the following information........\n\n";
    for(i=0;i<5;i++)
    {
        ob[i].display();
    }

return 0;
}
