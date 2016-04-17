#include<iostream>
using namespace std;

class AClass {
private:
    int a,b;
public:
    void test() {
    a=10;
    b=20;
    }
// Declare the two functions friends.
friend int add(AClass input);
friend int minu(AClass input);
};

// Function one
int add(AClass input) {
    return (input.a+input.b);
}
// Function two
int minu(AClass input) {
    return (input.b-input.a);
}

int main(){
    AClass output;
    // Initialize output
    output.test();
    cout << add(output) << endl;
    cout << minu(output) << endl;
return 0;
}
