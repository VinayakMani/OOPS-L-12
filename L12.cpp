// vinayak mani/ lecture on pointer
#include<iostream>
using namespace std;

int main(){

int a=3;
int*b = &a;

cout<<"the address of a is "<<&a<<endl;
cout<<"the address of a is "<<b<<endl;

//dereference operator
cout<<"The value at address b is "<<*b<<endl;
    return 0;
}