#ifndef MARKET_H
#define MARKET_H
#include<cstring>
#include"Market.h"
#include<iostream>
using namespace std;

class Market
{
protected:
    float cola=10;
    float sandwich=20;
    float chips=50;
    float Juice=88;
    float coffee=33;
    float tea=100;
    float biscuite=120;
    float chooclete=55;
    float cake=22;
    float branch=99;
    string product;
    float coinn;
public :
    void print ();

    set_proudct(string s);
    set_coins(float c);
    get_proudct();
    get_coinn();
    void f1(float coinn);
    void f2(float coinn );
    void f3(float coinn );
    void f4(float coinn );
    void f5(float coinn);
    void f6(float coinn);
    void f7(float coinn);
    void f8(float coinn);
    void f9(float coinn);
    void f10(float coinn);
    void f11(float coinn);


};

#endif // MARKET_H

