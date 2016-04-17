#include<iostream>
using namespace std;

class marks
{
public:
    int maths;
    int science;
    marks(){
      maths=0;
      science=0;
    }
    marks(marks &obj){
      maths=obj.maths;
      science=obj.science;
    }

    void display(){
      cout<<"Maths :   " << maths;
      cout<<"\nScience : " << science;
    }
};

int main(){
    marks m1;
    marks m2(m1);
    m2.display();
    return 0;
}
