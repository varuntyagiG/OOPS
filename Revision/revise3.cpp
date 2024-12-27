#include<iostream>
using namespace std;

class A{
       public:
       int a;
       
       // function overloadig
       int sum(int a,int b){
              return a + b;
       }

       int sum(int a,int b,int c){
              return a + b + c;
       }

       int sum(int a,float b){
              return a + b;
       }

       // operator overloading
       void operator+(A &obj2){
              int value1 = this->a;
              int value2 = obj2.a;
              cout << value1 - value2 << endl;
       }
};

int main(){
       A obj1;
       obj1.a = 19;


       A obj2;
       obj2.a = 9;

       obj1 + obj2;
       return 0;
}