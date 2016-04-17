#include<iostream>
using namespace std;

class Marks
{
public:
   int maths;
   int science;
   //Parametrized Constructor
   Marks(int mark1,int mark2) {
      maths = mark1;
      science = mark2;
   }

   void display() {
      cout << "Maths :  " << maths <<endl;
      cout << "Science :" << science << endl;
   }
};

int main() {
  //invoke Parametrized Constructor
  Marks m(5,9);
  m.display();
  return 0;
}
