#include<iostream>
using namespace std;

class A{
       public:
       int sum(int a,int b){
              cout << "1 sum " << endl;
              return a + b;
       }

       int sum(int a,int b,int c){
              cout << "2 sum " << endl;
              return a + b + c;
       }

       int sum(int a,float b){
              cout << "3 sum " << endl;
              return a + b;
       }
};

int main(){
       A* a = new A();
       cout << a->sum(4,5.5f) << endl;
       return 0;
}