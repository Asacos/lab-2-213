#include "func.h"

int _show(int n,car* c,int i)
{
        if (n==0)
        {
            n=1;
            c->SetCar("none", 0, 0, 0, 0, i);
        }
        c->print();
        return n;
}

void _change(car *c, int i)
{
    char* mod;
    mod=new char[20];
    int sp;
    int r;
    int g;
    int b;
    cout<<"Input model: "<<endl;
    cin>>mod;
    cout<<"\nInput speed: "<<endl;
    cin>>sp;
    cout<<"\nInput red: "<<endl;
    cin>>r;
    cout<<"\nInput green: "<<endl;
    cin>>g;
    cout<<"\nInput blue: "<<endl;
    cin>>b;
    c->SetCar(mod, sp, r, g, b, i);
}
