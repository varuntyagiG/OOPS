#include<iostream>
using namespace std;

class A{
       public:
       virtual
       void print(){
              cout << "class 'A' " << endl;
       }
};

class B:public A{
       public:
       void print(){
              cout << "class 'B' " << endl;
       } 
};

int main(){
       // A* a = new A();
       // a->print();

       // B* b = new B();
       // b->print();

       A* a = new B();
       a->print();
       return 0;
}