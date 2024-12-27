#include<iostream>
#include<vector>
using namespace std;

class Animal{
       public:
       int legs;

       void eat(){
              cout << "eat daily " << endl;
       }     
};

class Dog:protected Animal{
       public:
       void sleep(){
              cout << this->legs << endl;
       }
}; 

int main(){
       Dog D1;
       D1.sleep();
       return 0;
}