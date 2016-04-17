# include <iostream>
using namespace std;
template <class T>
T large (T &x,T &y,T &z)
{
    int i,j;
    T temp,a[4];
    a[1]={x};
    a[2]={y};
    a[3]={z};
    for(i=0;i<=3;i++)
    {
        for(j=i+1;j<=3;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    x=a[1];
    y=a[2];
    z=a[3];

}
int main ()
{
    int i1,i2,i3;
    float f1,f2,f3;
    char c1,c2,c3;
    cout<<"ENTER 3 INTEGERS:";
    cin>>i1>>i2>>i3;
    large(i1,i2,i3);
    cout<<"\nAFTER SHORTING:"<<i1<<" "<<i2<<" "<<i3;
    cout<<"\n\nENTER 3 FLOATS:";
    cin>>f1>>f2>>f3;
    large(f1,f2,f3);
    cout<<"\nAFTER SHORTING:"<<f1<<" "<<f2<<" "<<f3;
    cout<<"\n\nENTER 3 CHARACTERS:";
    cin>>c1>>c2>>c3;
    large(c1,c2,c3);
    cout<<"\nAFTER SHORTING:"<<c1<<" "<<c2<<" "<<c3;
    return 0;
}
