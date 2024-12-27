#include<iostream>
using namespace std;

class Car{
       public:
       string name;
       int tyres;

       void Break(){
              cout << "very fast break" << endl;
       }

       void speeds(){
              cout << "high break" << endl;
       }
};

class Scorpio:public Car{

};

int main(){
       Scorpio S1;
       S1.speeds();
       return 0;
}