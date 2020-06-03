#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

#include <iostream>
#include <cstring>

using namespace std;

class car
{
private:
    char* model;
    int speed;
    int color[3];
    int ord;
public:

    //car(char* _model, int _speed, int_r, int _g, int _b)

    car(const car &c)
    {
        model=c.model;
        speed=c.speed;
        int i;
        for (i=0; i<3; i++)
            color[i]=c.color[i];
    }

    car()
    {
         model=new char[10];
    }

    //car(char* model, int speed, int r, int g, int b)

    void SetCar(char* _mod, int _sp, int _r, int _g, int _b, int i)
    {
        int len=strlen(_mod);
        model=new char[len];
        strcpy(this->model,_mod);
        this->speed=_sp;
        this->color[0]=_r;
        this->color[1]=_g;
        this->color[2]=_b;
        this->ord=i;
    }

    char* GetModel()
    {
        return model;
    }

    int GetSpeed()
    {
        return speed;
    }

    int GetR()
    {
        return color[0];
    }

     int GetG()
    {
        return color[1];
    }

     int GetB()
    {
        return color[2];
    }

     int GetOrd()
     {
         return ord;
     }

    void print()
    {
        cout<<ord+1<<". model: "<<model<<" speed: "<<speed<<" color: "<<color[0]<<", "<<color[1]<<", "<<color[2]<<endl;
    }

    car & operator ++()
    {
        this->ord++;
        return *this;
    }

    car & operator --()
    {
        this->ord--;
        return *this;
    }
};

#endif // CAR_H_INCLUDED
