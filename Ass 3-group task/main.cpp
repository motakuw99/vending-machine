#include <iostream>
#include"Market.h"
using namespace std;

int main()
{
    Market m;
    m.print();
    int choose;
    cout <<"enter your  choice ";
    cin >> choose;
    cout<<"Enter the product which you want and the price:"<<endl;
    float t;
    cout<<"Enter product: ";
    string s1;
    cin>>s1;
    cout<<"Enter coins: ";
    cin >>t;
    if (choose ==1)
    {
        m.f1(t);
    }
    if(choose==2)
    {
        m.f2(t);
    }
    if(choose==3)
    {
        m.f3(t);
    }
    if(choose==4)
    {
        m.f4(t);
    }
    if(choose==5)
    {
        m.f5(t);
    }
    if(choose==6)
    {
        m.f6(t);
    }
    if(choose==7)
    {
        m.f7(t);
    }
    if(choose==8)
    {
        m.f8(t);
    }
    if(choose==9)
    {
        m.f9(t);
    }
    if(choose==10)
    {
        m.f10(t);
    }


}
