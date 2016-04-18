# include <iostream>
using namespace std;
int main ()
{
    int n,i,j,k;
    cout<<"Enter number:";
    cin>>n;
    cout<<"The shape is:\n";
    for (i=1;i<=n;i++)
    {
        for (j=1;j<3;j++)
        {
            for (k=i;k<=n;k++)
            {
               cout<<"*";
            }
          cout<<"\n";
        }
    }
    return 0;
}

