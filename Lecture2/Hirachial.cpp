#include<iostream>
using namespace std;

class A{
       public:
       int a;
};

class B:public A{
       public:
       int b;
};

class C:public A{
       public:
       int c;
};


int main(){
       B bb;
       C cc;
       cout << bb.a << endl;
       cout << cc.a << endl;
       return 0;
}