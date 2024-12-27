#include<iostream>
using namespace std;

class A{
       public:
       int gk = 90;
};

class B{
       public:
       int gk = 98;
};

class C:public A,public B{

};

int main(){
       C c;
       // scope resultion operator
       cout << c.A::gk << endl;
       return 0;
}