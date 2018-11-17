#include "Market.h"
#include <iostream>

using namespace std;
Market::Market(){
set_product(0);
set_coins(0);
}
void Market:: print ()
{

    cerr<<"the products in the machine are : \n";
    cerr<<"1:Cola : 10$  \n ";
    cerr<<"2:Sandwich : 20$  \n ";
    cerr<<"3:Chips : 50$  \n";
    cerr<<"4:Juice : 88$  \n";
    cerr<<"5:Coffee : 33$  \n";
    cerr<<"6:Tee :100$  \n";
    cerr<<"7:Beiscuite : 120$ \n";
    cerr<<"8:chooclete : 55$  \n";
    cerr<<"9:cake  : 22$  \n";
    cerr<<"10:Branch : 99$  \n";
}





    void Market::set_proudct(string s)
    {
        string product;
        prouduct=s;
    }
    void Market::set_coins(float c)
    {
        float coinn;
        coinn=c;

    }
    string Market::get_proudct(){
    return proudect;
    }
    float Market::get_coinn(){
    return coinn;
    }




void f1(float coinn)
{
float cola=10;

    string product;


    float carry=0;
    if(coinn>cola||coinn==cola)
    {
        carry=coinn-cola;
        cout<<"your carry is:"<<carry<<endl;

    }
}

void f2(float coinn )
{
    float sandwich=20;

    string product;


    float carry=0;
    if (coinn >sandwich || coinn ==sandwich )
    {
        carry=coinn-sandwich;

        cout<<endl<<"your carry is:"<<carry<<endl;

    }
}


void f3(float coinn )
{
    float chips=50;

    string product;


    float carry=0;
    if (coinn >chips || coinn ==chips )
    {
        carry=coinn-chips;

        cout<<endl<<"your carry is:"<<carry<<endl;

    }
}
void f4(float coinn )
{

    float Juice=88;

    string product;


    float carry=0;
    if (coinn >Juice || coinn ==Juice)
    {
        carry=coinn-Juice;

        cout<<endl<<"your carry is:"<<carry<<endl;

    }
}
void f5(float coinn)
{

    float coffee=33;

    string product;


    float carry=0;
    if(coinn >coffee||coinn==coffee)
    {

        cout<<"Here are  your product";
        carry=coinn-coffee;
        cout<<"your carry is:"<<carry<<endl;

    }
}


void f6(float coinn)
{
    float tea=100;

    string product;


    float carry=0;
    if(coinn >tea||coinn==tea)
    {

        cout<<"Here are  your product";
        carry=coinn-tea;
        cout<<"your carry is:"<<carry<<endl;

    }
}
void f7(float coinn)
{
    float biscuite=120;

    string product;


    float carry=0;
    if(coinn >biscuite||coinn==biscuite)
    {

        cout<<"Here are  your product";
        carry=coinn-biscuite;
        cout<<"your carry is:"<<carry<<endl;

    }
}
void f8(float coinn)
{


    float chooclete=55;

    string product;

    float carry=0;
    if(coinn >chooclete||coinn==chooclete)
    {

        cout<<"Here are  your product";
        carry=coinn-chooclete;
        cout<<"your carry is:"<<carry<<endl;

    }
}
void f9(float coinn)
{

    float cake=22;

    string product;


    float carry=0;
    if(coinn >cake||coinn==cake)
    {

        cout<<"Here are  your product";
        carry=coinn-cake;
        cout<<"your carry is:"<<carry<<endl;

    }
}
void f10(float coinn)
{



    float branch=99;
    string product;

    float carry=0;
    if(coinn >branch||coinn==branch)
    {

        cout<<"Here are  your product";
        carry=coinn-branch ;
        cout<<"your carry is:"<<carry<<endl;

    }
}
void f11(float coinn)
{

    float carry=0;
    if(coinn ==0)
    {
        cout<<"Enter correct num!!";
    }
}


