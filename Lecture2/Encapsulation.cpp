#include<iostream>
using namespace std;

class Animal{
  private:
  int age;
  string name;

  public:
  void eat(){
    cout << "eat" << endl;
  }

  int getAge(){
    return this->age;
  }

  void setAge(int age){
    this->age = age;
  }

 
};

int main(){
  Animal* A = new Animal();
  A->setAge(17);

  cout << A->getAge() << endl;
  return 0;
}