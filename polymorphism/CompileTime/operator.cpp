#include<iostream>
using namespace std;

class A{
       public:
       int a;

       // this is function of +
       void operator+(A& obj2){
              int value1 = this->a;
              int value2 = obj2.a;

              cout << (value2 * value1) << endl;
       }
};

int main(){
       A obj1;
       A obj2;
       
       obj1.a = 8;
       obj2.a = 15;

       // add both of them
       obj1 + obj2;
       return 0;
}