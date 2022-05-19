// Use of multilevel inheritance

#include<iostream>
using namespace std;

class Vehicle {
    public:
    Vehicle()
    {
        cout<<"This is my another new vehicle "<<endl;
    }
};

class Twowheeler : public Vehicle {
    public:
    Twowheeler()
    {
        cout<<"This is my splender plus bike"<<endl;
    }
};

class car : public Twowheeler {
    public :
    car()
    {
        cout<<"My bike has two wheels"<<endl;
    }
};

int main(){

    car obj;
    return 0;
}


