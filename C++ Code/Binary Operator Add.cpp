#include<iostream>

using namespace std;

class Opera
{
private:
    int m;
public:
   void GetData()
  {
      cout<<"Enter  Value : ";  //Get The Input
      cin>>m;
  }
  void Display()
  {
      cout<<"............................................."<<endl;
      cout<<"              =  "<<m;
  }

    Opera operator+(Opera primary)  //Operator That add Two Number

    {
        primary.m=this->m+primary.m;
        return primary;
    }
};



 int main()
 {
     Opera A,B,C;
     A.GetData();
     B.GetData();
     C=A+B;
     C.Display();
     return 0;
 }
