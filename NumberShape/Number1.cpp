# include <iostream>
using namespace std;
int main ()
{
    int i,j;
cout<<"The shape is:\n";
    for (i=10;i>=0;i--)
    {
        for (j=1;j<=i;j++)
        {
            cout<<" "<<j;
        }
        cout<<"\n";
    }
    return 0;
}
