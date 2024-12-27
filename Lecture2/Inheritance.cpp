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

class Dog:public Animal{
       public:
       void eat(){
              cout << "Dog eat " << endl;
       }

       void sleep(){
              cout << this->legs << endl;
       }
}; 

int main(){
       Animal* A1 = new Animal();
       A1->eat();

       Dog* D1 = new Dog();
       D1->eat();
       D1->legs = 4;
       D1->sleep();
       return 0;
}