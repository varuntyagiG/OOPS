#include<iostream>
using namespace std;

class A{
       public:
       int a;
};

class B:protected A{
       public:
       int b;

       B(){
              this->a = 5;
       }

       void print(){
              cout << a << endl;
       }
};

class C:public B{
       public:
       void print2(){
              cout << a << endl;
       }
};

int main(){
       C x;
       x.print2();
       return 0;
}