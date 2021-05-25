#include <iostream>
#include "pola.h"
#include "objetosci.h"
using namespace std;

int main()
{
    int a,b;
    cout<<"Podaj bok kwadratu: "<<endl;
    cin>>a;
    cout<<"Podaj bok szescianu: "<<endl;
    cin>>b;
    pola p;
    objetosci o;
    p.kwadrat(a);
    p.szescian(b);
    o.szes(b);
    cout<<"Pole kwadratu: "<<p.kwadrat(a)<<endl;
    cout<<"Pole szescianu: "<<p.szescian(b)<<endl;
    cout<<"Objetosc szescianu: "<<o.szes(b)<<endl;
    return 0;
}
