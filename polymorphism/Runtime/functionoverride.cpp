#include<iostream>
using namespace std;

class Animal{
       public:
       virtual
       void speak(){
              cout << "Speaking" << endl;
       }
};

class Dog:public Animal{
       public:
       // this speak function override animal vale speak ko
       // check the def. of a function
       void speak(){
              cout << "Barking" << endl;
       }
};

int main(){
       Animal* A = new Animal();
       A->speak();

       Dog* D = new Dog();
       D->speak();

       // upCasting
       Animal* A2 = new Dog();
       A2->speak();
       return 0;
}